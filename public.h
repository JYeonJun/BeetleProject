#ifndef _MY_PUBLIC_
#define _MY_PUBLIC_

#include <iostream>
#include <Windows.h>    // system() �Լ� ���
#include <conio.h>  // gotoxy()) �Լ� ���
#include <time.h>
#include <fstream>

#define VISITED '1' // ��ũ�� ���(������ �湮�� ���� '1'�� ǥ��)
#define NOTVISITED '0'  // ��ũ�� ���(������ �湮�� ���� ���� '0'���� ǥ��)
#define BEETLE '*'  // ��ũ�� ���(������ ��ġ�� '*'���� ǥ��)
#define FAIL -1

using namespace std;

enum {  // ������ ��ġ�� ������ �� ����ϴ� ������
    UP,
    RIGHTUP,
    RIGHT,
    RIGHTDOWN,
    DOWN,
    LEFTDOWN,
    LEFT,
    LEFTUP
};


enum {  // ������ ���� ������ �� ����ϴ� ������
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