#include "Room.h"

Room::Room(int size): size_(size), room_(NULL){ // 방의 크기를 매개변수로 받는다.
    //size_ = size;
    room_ = new char* [size_];

    for (int i = 0; i < size_; i++)
        room_[i] = new char[size_]; // 방의 크기만큼 2차원 배열로 동적할당한다.

    for (int i = 0; i < size_; i++)
        for (int j = 0; j < size_; j++)
            room_[i][j] = NOTVISITED;   // 벌레가 아직 방문하지 않았으므로 모든 방을 NOTVISITED('0')으로 초기화한다.
}

Room::~Room() {
    for (int i = 0; i < size_; i++)
        delete[] room_[i];

    delete[] room_;
}

void Room::CheckVisited(int x, int y){  // 방문한 방임을 표시하는 함수
    room_[x][y] = VISITED;  // 방문한 방을 VISITED('1')로 표시
}

void Room::CheckBeetle(int x, int y) {  // 벌레의 위치를 표시하는 함수
    room_[x][y] = BEETLE;   // 벌레의 위치에 BEETLE('*')로 표시
}


bool Room::VisitCheck(int x, int y) {   // 방문했는지만 검사하고 결과를 반환하는 함수
    if (room_[x][y] == NOTVISITED) { // 방문하지 않았던 방이라면 false를 반환
        return false;
    }

    else if(room_[x][y] == VISITED || room_[x][y] == BEETLE){  // 방문했던 방이거나 다른 벌레가 있는 방이라면
        return true;    // true를 반환
    }
}

void Room::PrintRoom(int order, double time, int count) {   // 벌레의 움직임과 방의 정보를 출력하는 함수
    int k = 5, z = 2;   // 커서 위치를 설정하는 변수

    for (int i = 0; i < size_; i++) {
        k = 5;
        z++;
        RoomCursor((5 + size_) / 2, 1); // 커서를 변경하는 함수 호출
        cout << order + 1 << "번째 시도";

        for (int j = 0; j < size_; j++) {
            RoomCursor(k, z);
            k += 2;
            if (room_[i][j] == NOTVISITED)  // 방문하지 않은 방이라면
                cout << "□";
            else if(room_[i][j] == VISITED) // 방문한 방이라면
                cout << "■";
            else if (room_[i][j] == BEETLE) {   // 벌레의 위치
                BeetleColor(RED, BROWN);    // 벌레를 출력하는 텍스트 색과 배경 색을 변경
                cout << "**";
                BeetleColor(WHITE, BLACK);
            }     
        }
        cout << endl;
    }

    RoomCursor( (5+ size_) * 2, (2 + size_)/2);
    cout << order + 1 << "번째 소요 시간 = " << time << "초" << endl;  // 각 시행별 소요 시간을 함께 출력

    RoomCursor((5 + size_) * 2, (2 + size_) / 2 + 1);
    cout << order + 1 << "번째 이동 횟수 = " << count << "번" << endl; // 각 시행별 이동 횟수를 함께 출력
}

void Room::RoomCursor(int x, int y) {
    COORD pos = { x, y };   // COORD 구조체 변수를 통해 이동할 위치를 설정한다.
    // COORD 라는 구조체는 x, y 위치를 가지고 있는 구조체 이다 -> 이 구조체 변수를 만들어 x, y에 값을 대입한다.
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    // SetConsoleCursorPosition 함수는 말 그대로 콘솔 커서 위치를 알려주는 함수이다.
}

void Room::BeetleColor(int foreground, int background) {
    int color = foreground + background * 16;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
