#ifndef _MY_BEETLE
#define _MY_BEETLE
#include "public.h"
#include "Room.h"

class Beetle {
public:
    Beetle();

    void SetX(int); // 매개변수로 받은 값을 벌레의 x좌표 위치로 설정하는 함수
    void SetY(int); // 매개변수로 받은 값을 벌레의 y좌표 위치로 설정하는 함수

    int ReturnX();  // 벌레의 x좌표 값을 반환하는 함수
    int ReturnY();  // 벌레의 y좌표 값을 반환하는 함수

    void Move(Room* room, int size, int& count, int& check, int direction); // 벌레를 움직이는 함수 
    bool CheckValidPosition(int x, int y, int size);    // 벌레가 이동할 위치가 유효한 위치인지 검사하는 함수

private:
    int beetle_x_;  // 벌레의 x좌표 위치를 저장하는 변수
    int beetle_y_;  // 벌레의 y좌표 위치를 저장하는 변수
};

#endif