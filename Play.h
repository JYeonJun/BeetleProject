#ifndef _MY_PLAY_
#define _MY_PLAY_

#include "public.h"
#include "Room.h"
#include "Beetle.h"
#include "Result.h"
#include "Timer.h"
#include "Data.h"

void Setting(); // ������ ��� ���� �̵� Ƚ�� ���� ���, �� ���� Ƚ��, �̵� ���� Ƚ��, ���� ũ��, ���� ���� �Է� �ް� Play()�Լ��� ȣ���ϴ� �Լ� 

void Play(Data* data, Timer* timer2, int print_lnput, int size, int num, int limit_input, int limit, int order);    // ������ �����̰� �������� ����ϴ� �Լ��̴�.

bool AllVisited(int size, int check);   // ������ ��� ���� �湮�ߴ��� �˻��ϴ� �Լ��̴�.

void CursorInvisible(); // ������ ������ ��½� Ŀ���� ������ �ʵ����ϴ� �Լ��̴�.

#endif