#ifndef _MY_ROOM_
#define _MY_ROOM_
#include "public.h"

class Room {
public:
    Room(int);
    ~Room();

    void BeetleColor(int, int); // 벌레의 색을 설정하는 함수
    void CheckVisited(int x, int y);    // 방문한 방임을 표시하는 함수
    bool VisitCheck(int x, int y);  // 방문했던 방인지 검사하는 함수
    void CheckBeetle(int x, int y); // 벌레의 위치를 표시하는 함수
    void RoomCursor(int x, int y);  // 특정 위치로 커서를 옮기는 함수
    void PrintRoom(int order, double time, int count);  // 벌레의 움직임과 방의 정보를 출력하는 함수

private:
    char** room_;   // 방의 크기만큼 동적할당하는 이중 포인터 변수
    int size_;   // 방의 크기
};

#endif