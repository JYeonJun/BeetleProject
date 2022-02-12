#include "Beetle.h"

Beetle::Beetle() : beetle_x_(0), beetle_y_(0) {}

bool Beetle::CheckValidPosition(int x, int y, int size) {   // 벌레가 움직일 위치가 유효한 위치인지 검사하는 함수
    return (0 <= x && 0 <= y && x < size&& y < size);   // x좌표 y좌표가 방을 벗어나지 않는다면 true 반환
}

void Beetle::Move(Room* room, int size, int& count, int& check, int direction) {    // 벌레를 움직이는 함수

    int next_x = beetle_x_; // 벌레가 다음에 이동할 x좌표를 저장하는 변수 생성 후 현재 x좌표를 대입
    int next_y = beetle_y_; // 벌레가 다음에 이동할 y좌표를 저장하는 변수 생성 후 현재 y좌표를 대입

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

    if (CheckValidPosition(next_x, next_y, size)) { // 이동할 위치가 유요한 위치라면
        if (room->VisitCheck(next_x, next_y)) {    // 이미 방문했던 방이라면
            room->CheckVisited(beetle_x_, beetle_y_); // 현재 벌레 위치에는 VISITED('1') 대입
            beetle_x_ = next_x; // 벌레의 x좌표를 변경
            beetle_y_ = next_y; // 벌레의 y좌표를 변경
            room->CheckBeetle(beetle_x_, beetle_y_);    // 벌레가 다음에 이동할 위치에 BEETLE('*') 대입

            count++;    // 벌레의 이동 횟수만 증가
        }

        else if (!room->VisitCheck(next_x, next_y)) {  // 방문하지 않았던 곳이라면
            room->CheckVisited(beetle_x_, beetle_y_);  // 현재 벌레 위치에는 VISITED('1') 대입
            beetle_x_ = next_x; // 벌레의 x좌표를 변경
            beetle_y_ = next_y; // 벌레의 y좌표를 변경
            room->CheckBeetle(beetle_x_, beetle_y_);     // 벌레가 다음에 이동할 위치에 BEETLE('*') 대입
            
            count++;    // 벌레의 이동 횟수 증가
            check++;    // 벌레가 방문한 방의 개수도 증가
        }
    }
}

void Beetle::SetX(int x) { // 매개변수로 받은 값을 벌레의 x좌표 위치로 설정하는 함수
    beetle_x_ = x;
}

void Beetle::SetY(int y) { // 매개변수로 받은 값을 벌레의 y좌표 위치로 설정하는 함수
    beetle_y_ = y;
}

int Beetle::ReturnX() { // 벌레의 x좌표 값을 반환하는 함수
    return beetle_x_;
}

int Beetle::ReturnY() { // 벌레의 y좌표 값을 반환하는 함수
    return beetle_y_;
}