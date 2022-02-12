#include "Room.h"

Room::Room(int size): size_(size), room_(NULL){ // ���� ũ�⸦ �Ű������� �޴´�.
    //size_ = size;
    room_ = new char* [size_];

    for (int i = 0; i < size_; i++)
        room_[i] = new char[size_]; // ���� ũ�⸸ŭ 2���� �迭�� �����Ҵ��Ѵ�.

    for (int i = 0; i < size_; i++)
        for (int j = 0; j < size_; j++)
            room_[i][j] = NOTVISITED;   // ������ ���� �湮���� �ʾ����Ƿ� ��� ���� NOTVISITED('0')���� �ʱ�ȭ�Ѵ�.
}

Room::~Room() {
    for (int i = 0; i < size_; i++)
        delete[] room_[i];

    delete[] room_;
}

void Room::CheckVisited(int x, int y){  // �湮�� ������ ǥ���ϴ� �Լ�
    room_[x][y] = VISITED;  // �湮�� ���� VISITED('1')�� ǥ��
}

void Room::CheckBeetle(int x, int y) {  // ������ ��ġ�� ǥ���ϴ� �Լ�
    room_[x][y] = BEETLE;   // ������ ��ġ�� BEETLE('*')�� ǥ��
}


bool Room::VisitCheck(int x, int y) {   // �湮�ߴ����� �˻��ϰ� ����� ��ȯ�ϴ� �Լ�
    if (room_[x][y] == NOTVISITED) { // �湮���� �ʾҴ� ���̶�� false�� ��ȯ
        return false;
    }

    else if(room_[x][y] == VISITED || room_[x][y] == BEETLE){  // �湮�ߴ� ���̰ų� �ٸ� ������ �ִ� ���̶��
        return true;    // true�� ��ȯ
    }
}

void Room::PrintRoom(int order, double time, int count) {   // ������ �����Ӱ� ���� ������ ����ϴ� �Լ�
    int k = 5, z = 2;   // Ŀ�� ��ġ�� �����ϴ� ����

    for (int i = 0; i < size_; i++) {
        k = 5;
        z++;
        RoomCursor((5 + size_) / 2, 1); // Ŀ���� �����ϴ� �Լ� ȣ��
        cout << order + 1 << "��° �õ�";

        for (int j = 0; j < size_; j++) {
            RoomCursor(k, z);
            k += 2;
            if (room_[i][j] == NOTVISITED)  // �湮���� ���� ���̶��
                cout << "��";
            else if(room_[i][j] == VISITED) // �湮�� ���̶��
                cout << "��";
            else if (room_[i][j] == BEETLE) {   // ������ ��ġ
                BeetleColor(RED, BROWN);    // ������ ����ϴ� �ؽ�Ʈ ���� ��� ���� ����
                cout << "**";
                BeetleColor(WHITE, BLACK);
            }     
        }
        cout << endl;
    }

    RoomCursor( (5+ size_) * 2, (2 + size_)/2);
    cout << order + 1 << "��° �ҿ� �ð� = " << time << "��" << endl;  // �� ���ະ �ҿ� �ð��� �Բ� ���

    RoomCursor((5 + size_) * 2, (2 + size_) / 2 + 1);
    cout << order + 1 << "��° �̵� Ƚ�� = " << count << "��" << endl; // �� ���ະ �̵� Ƚ���� �Բ� ���
}

void Room::RoomCursor(int x, int y) {
    COORD pos = { x, y };   // COORD ����ü ������ ���� �̵��� ��ġ�� �����Ѵ�.
    // COORD ��� ����ü�� x, y ��ġ�� ������ �ִ� ����ü �̴� -> �� ����ü ������ ����� x, y�� ���� �����Ѵ�.
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    // SetConsoleCursorPosition �Լ��� �� �״�� �ܼ� Ŀ�� ��ġ�� �˷��ִ� �Լ��̴�.
}

void Room::BeetleColor(int foreground, int background) {
    int color = foreground + background * 16;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
