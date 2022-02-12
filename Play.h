#ifndef _MY_PLAY_
#define _MY_PLAY_

#include "public.h"
#include "Room.h"
#include "Beetle.h"
#include "Result.h"
#include "Timer.h"
#include "Data.h"

void Setting(); // 벌레의 출력 모드와 이동 횟수 제한 모드, 총 실행 횟수, 이동 제한 횟수, 방의 크기, 벌레 수를 입력 받고 Play()함수를 호출하는 함수 

void Play(Data* data, Timer* timer2, int print_lnput, int size, int num, int limit_input, int limit, int order);    // 벌레를 움직이고 움직임을 출력하는 함수이다.

bool AllVisited(int size, int check);   // 벌레가 모든 방을 방문했는지 검사하는 함수이다.

void CursorInvisible(); // 벌레의 움직임 출력시 커서가 보이지 않도록하는 함수이다.

#endif