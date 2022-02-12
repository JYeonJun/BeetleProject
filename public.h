#ifndef _MY_PUBLIC_
#define _MY_PUBLIC_

#include <iostream>
#include <Windows.h>    // system() 함수 사용
#include <conio.h>  // gotoxy()) 함수 사용
#include <time.h>
#include <fstream>

#define VISITED '1' // 매크로 상수(벌레가 방문한 방을 '1'로 표시)
#define NOTVISITED '0'  // 매크로 상수(벌레가 방문지 않은 방을 '0'으로 표시)
#define BEETLE '*'  // 매크로 상수(벌레의 위치를 '*'으로 표시)
#define FAIL -1

using namespace std;

enum {  // 벌레의 위치를 설정할 때 사용하는 열거형
    UP,
    RIGHTUP,
    RIGHT,
    RIGHTDOWN,
    DOWN,
    LEFTDOWN,
    LEFT,
    LEFTUP
};


enum {  // 벌레의 색을 설정할 때 상요하는 열거형
    BLACK,
    BLUE,
    GREEN,
    CYAN,
    RED,
    MAGENTA,
    BROWN,
    LIGHTGRAY,
    DARKGRAY,
    LIGHTBLUE,
    LIGHTGREEN,
    LIGHTCYAN,
    LIGHTRED,
    LIGHTMAGENTA,
    YELLOW,
    WHITE
};

#endif