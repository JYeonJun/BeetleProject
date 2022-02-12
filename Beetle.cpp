#include "Beetle.h"

Beetle::Beetle() : beetle_x_(0), beetle_y_(0) {}

bool Beetle::CheckValidPosition(int x, int y, int size) {   // ������ ������ ��ġ�� ��ȿ�� ��ġ���� �˻��ϴ� �Լ�
    return (0 <= x && 0 <= y && x < size&& y < size);   // x��ǥ y��ǥ�� ���� ����� �ʴ´ٸ� true ��ȯ
}

void Beetle::Move(Room* room, int size, int& count, int& check, int direction) {    // ������ �����̴� �Լ�

    int next_x = beetle_x_; // ������ ������ �̵��� x��ǥ�� �����ϴ� ���� ���� �� ���� x��ǥ�� ����
    int next_y = beetle_y_; // ������ ������ �̵��� y��ǥ�� �����ϴ� ���� ���� �� ���� y��ǥ�� ����

    switch (direction) {
        case UP:
            --next_y;
            break;

        case RIGHTUP:
            ++next_x;
            --next_y;
            break;

        case RIGHT:
            ++next_x;
            break;

        case RIGHTDOWN:
            ++next_x;
            ++next_y;
            break;

        case DOWN:
            ++next_y;
            break;

        case LEFTDOWN:
            --next_x;
            ++next_y;
            break;

        case LEFT:
            --next_x;
            break;

        case LEFTUP:
            --next_x;
            --next_y;
            break;
    }

    if (CheckValidPosition(next_x, next_y, size)) { // �̵��� ��ġ�� ������ ��ġ���
        if (room->VisitCheck(next_x, next_y)) {    // �̹� �湮�ߴ� ���̶��
            room->CheckVisited(beetle_x_, beetle_y_); // ���� ���� ��ġ���� VISITED('1') ����
            beetle_x_ = next_x; // ������ x��ǥ�� ����
            beetle_y_ = next_y; // ������ y��ǥ�� ����
            room->CheckBeetle(beetle_x_, beetle_y_);    // ������ ������ �̵��� ��ġ�� BEETLE('*') ����

            count++;    // ������ �̵� Ƚ���� ����
        }

        else if (!room->VisitCheck(next_x, next_y)) {  // �湮���� �ʾҴ� ���̶��
            room->CheckVisited(beetle_x_, beetle_y_);  // ���� ���� ��ġ���� VISITED('1') ����
            beetle_x_ = next_x; // ������ x��ǥ�� ����
            beetle_y_ = next_y; // ������ y��ǥ�� ����
            room->CheckBeetle(beetle_x_, beetle_y_);     // ������ ������ �̵��� ��ġ�� BEETLE('*') ����
            
            count++;    // ������ �̵� Ƚ�� ����
            check++;    // ������ �湮�� ���� ������ ����
        }
    }
}

void Beetle::SetX(int x) { // �Ű������� ���� ���� ������ x��ǥ ��ġ�� �����ϴ� �Լ�
    beetle_x_ = x;
}

void Beetle::SetY(int y) { // �Ű������� ���� ���� ������ y��ǥ ��ġ�� �����ϴ� �Լ�
    beetle_y_ = y;
}

int Beetle::ReturnX() { // ������ x��ǥ ���� ��ȯ�ϴ� �Լ�
    return beetle_x_;
}

int Beetle::ReturnY() { // ������ y��ǥ ���� ��ȯ�ϴ� �Լ�
    return beetle_y_;
}