#ifndef _MY_ROOM_
#define _MY_ROOM_
#include "public.h"

class Room {
public:
    Room(int);
    ~Room();

    void BeetleColor(int, int); // ������ ���� �����ϴ� �Լ�
    void CheckVisited(int x, int y);    // �湮�� ������ ǥ���ϴ� �Լ�
    bool VisitCheck(int x, int y);  // �湮�ߴ� ������ �˻��ϴ� �Լ�
    void CheckBeetle(int x, int y); // ������ ��ġ�� ǥ���ϴ� �Լ�
    void RoomCursor(int x, int y);  // Ư�� ��ġ�� Ŀ���� �ű�� �Լ�
    void PrintRoom(int order, double time, int count);  // ������ �����Ӱ� ���� ������ ����ϴ� �Լ�

private:
    char** room_;   // ���� ũ�⸸ŭ �����Ҵ��ϴ� ���� ������ ����
    int size_;   // ���� ũ��
};

#endif