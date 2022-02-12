#ifndef _MY_BEETLE
#define _MY_BEETLE
#include "public.h"
#include "Room.h"

class Beetle {
public:
    Beetle();

    void SetX(int); // �Ű������� ���� ���� ������ x��ǥ ��ġ�� �����ϴ� �Լ�
    void SetY(int); // �Ű������� ���� ���� ������ y��ǥ ��ġ�� �����ϴ� �Լ�

    int ReturnX();  // ������ x��ǥ ���� ��ȯ�ϴ� �Լ�
    int ReturnY();  // ������ y��ǥ ���� ��ȯ�ϴ� �Լ�

    void Move(Room* room, int size, int& count, int& check, int direction); // ������ �����̴� �Լ� 
    bool CheckValidPosition(int x, int y, int size);    // ������ �̵��� ��ġ�� ��ȿ�� ��ġ���� �˻��ϴ� �Լ�

private:
    int beetle_x_;  // ������ x��ǥ ��ġ�� �����ϴ� ����
    int beetle_y_;  // ������ y��ǥ ��ġ�� �����ϴ� ����
};

#endif