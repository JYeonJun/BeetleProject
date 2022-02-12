#include "Play.h"

void Setting() {
    int size = 0;   // 방의 크기
    int limit_input = 0;  // 이동 횟수 제한 설정 변수
    int limit = 0;   // 벌레 제한 이동횟수
    int print_input = 0;    // 벌레 움직임 출력할지 설정하는 변수
    int num = 0;    // 벌레 마리수
    int roop = 0;   // 총 반복 횟수 입력

    while (1) { // 출력 모드, 이동 횟수 제한 모드, 제한 이동 횟수, 총 반복 횟수, 방 크기, 벌레 수를 입력 받는다.
        try {
            cout << "----------------DrunkenBeetle Setting--------------------" << endl << endl;

            cout << "모드 설정" << endl;
            cout << "1. 출력 모드(벌레의 움직임 출력)" << endl;
            cout << "2. 실험 모드(벌레의 움직임 출력X)" << endl << endl;
            cout << "입력: ";
            cin >> print_input;

            if (print_input != 1 && print_input != 2)
                throw print_input;

            system("cls");
            cout << "----------------DrunkenBeetle Setting--------------------" << endl << endl;
            if (print_input == 1)
                cout << "모드: 출력 모드" << endl << endl;
            else
                cout << "모드: 실험 모드" << endl << endl;

            cout << "제한 모드 설정" << endl;
            cout << "1. 이동 횟수 제한 Yes" << endl;
            cout << "2. 이동 횟수 제한 No" << endl << endl;
            cout << "입력: ";
            cin >> limit_input;

            if (limit_input != 1 && limit_input != 2)
                throw limit_input;

            system("cls");
            cout << "----------------DrunkenBeetle Setting--------------------" << endl << endl;
            if (print_input == 1 && limit_input == 1) {
                cout << "모드: 출력 모드" << endl;
                cout << "이동 횟수 제한: Yes" << endl << endl;
            }

            else if (print_input == 1 && limit_input == 2) {
                cout << "모드: 출력 모드" << endl;
                cout << "이동 횟수 제한: No" << endl << endl;
            }

            else if (print_input == 2 && limit_input == 1) {
                cout << "모드: 실험 모드" << endl;
                cout << "이동 횟수 제한: Yes" << endl << endl;
            }

            else {
                cout << "모드: 실험 모드" << endl;
                cout << "이동 횟수 제한: No" << endl << endl;
            }

            if (limit_input == 1) {
                cout << endl << "제한 횟수 입력: ";
                cin >> limit;

                if (limit < 1)
                    throw limit;
            }    

            system("cls");
            cout << "----------------DrunkenBeetle Setting--------------------" << endl << endl;
            if (print_input == 1 && limit_input == 1) {
                cout << "모드: 출력 모드" << endl;
                cout << "이동 횟수 제한: Yes" << endl;
                cout << "제한 횟수: " << limit << endl << endl;
            }

            else if (print_input == 1 && limit_input == 2) {
                cout << "모드: 출력 모드" << endl;
                cout << "이동 횟수 제한: No" << endl << endl;
            }

            else if (print_input == 2 && limit_input == 1) {
                cout << "모드: 실험 모드" << endl;
                cout << "이동 횟수 제한: Yes" << endl;
                cout << "제한 횟수: " << limit << endl << endl;
            }

            else {
                cout << "모드: 실험 모드" << endl;
                cout << "이동 횟수 제한: No" << endl << endl;
            }
            
            cout << "실행 횟수 입력: ";
            cin >> roop;

            if (roop < 1)
                throw roop;

            system("cls");
            cout << "----------------DrunkenBeetle Setting--------------------" << endl << endl;
            if (print_input == 1 && limit_input == 1) {
                cout << "모드: 출력 모드" << endl;
                cout << "이동 횟수 제한: Yes" << endl;
                cout << "제한 횟수: " << limit << endl;
            }

            else if (print_input == 1 && limit_input == 2) {
                cout << "모드: 출력 모드" << endl;
                cout << "이동 횟수 제한: No" << endl;
            }

            else if (print_input == 2 && limit_input == 1) {
                cout << "모드: 실험 모드" << endl;
                cout << "이동 횟수 제한: Yes" << endl;
                cout << "제한 횟수: " << limit << endl;
            }

            else {
                cout << "모드: 실험 모드" << endl;
                cout << "이동 횟수 제한: No" << endl;
            }

            cout << "실행 횟수: " << roop << endl << endl;

            cout << "방의 크기 입력" << endl;
            if (print_input == 1) {
                cout << "방의 크기 n 입력(n은 20 이하)" << endl;
                cout << "n*n 크기 방 생성" << endl;
                cout << "입력: ";
                cin >> size;
                
                if (size <= 1 || size > 20)
                    throw size;
           }

            else {
                cout << endl << "방의 크기 n 입력" << endl;
                cout << "n*n 크기 방 생성" << endl;
                cout << "입력: ";
                cin >> size;

                if (size <= 1)
                    throw size;
            }

            system("cls");
            cout << "----------------DrunkenBeetle Setting--------------------" << endl << endl;
            if (print_input == 1 && limit_input == 1) {
                cout << "모드: 출력 모드" << endl;
                cout << "이동 횟수 제한: Yes" << endl;
                cout << "제한 횟수: " << limit << endl;
            }

            else if (print_input == 1 && limit_input == 2) {
                cout << "모드: 출력 모드" << endl;
                cout << "이동 횟수 제한: No" << endl;
            }

            else if (print_input == 2 && limit_input == 1) {
                cout << "모드: 실험 모드" << endl;
                cout << "이동 횟수 제한: Yes" << endl;
                cout << "제한 횟수: " << limit << endl;
            }

            else {
                cout << "모드: 실험 모드" << endl;
                cout << "이동 횟수 제한: No" << endl;
            }

            cout << "실행 횟수: " << roop << "번" << endl;

            cout << "방의 크기: " << size << endl << endl;

            cout << "벌레 수 입력: ";
            cin >> num;

            break;
        }
        catch (int error) {
            cout << "재입력 해주시오." << endl;
            system("pause");
            system("cls");
        }
    }

    Data data(roop);    // 벌레의 이동 횟수와 소요 시간을 저장해 결과 창에 출력하는 객체 생성
    Timer timer;    // 벌레가 모든 방을 방문하는 시간을 측정해주는 객체
    for(int i = 0; i < roop; i++)
        Play(&data, &timer, print_input, size, num, limit_input, limit, i); // 입력받은 정보들을 가지고 벌레를 움직이는 함수와 출력하는 함수를 호출하는 함수

    data.PrintData(print_input, roop, size, num, limit_input, limit);   // data객체에 저장된 정보들을 결과 창에 출력하는 함수 호출
}

void Play(Data* data, Timer* timer, int print_input, int size, int num, int limit_input, int limit, int order) {    // 벌레를 움직이는 함수와 출력하는 함수를 호출하는 주요 함수
    int count = 0;  // 벌레 이동횟수
    int check = 0;   // 새로운 방을 방문할 때마다 증가시키는 변수
    int notvisit = 0;   // 방문하지 않은 방 개수
    int direction = 0;  // 벌레의 다음 위치를 결정해주는 변수
    double* runtime = new double(0);    // 벌레 움직임 출력 함수의 매개변수로 쓸 시간을 나타내는 변수
    Beetle* beetle = new Beetle[num];   // 벌레 수만큼 Beetle 클래스 객체 동적할당

    srand((unsigned)time(NULL));

    Room room(size);    // 입력 받은 방의 크기로 방 생성

    for (int i = 0; i < num; i++) { // 벌레의 수만큼 시작 위치 설정
        int x = (int)(rand() % size);   // 벌레의 시작 x좌표를 랜덤하게 설정
        int y = (int)(rand() % size);   // 벌레의 시작 y좌표를 랜덤하게 설정
        beetle[i].SetX(x);  // 벌레의 x좌표에 랜덤한 값을 입력
        beetle[i].SetY(y);  // 벌레의 y좌표에 랜덤한 값을 입력

        if (!room.VisitCheck(beetle[i].ReturnX(), beetle[i].ReturnY())) { // 방문하지 않았던 곳이라면
            room.CheckVisited(beetle[i].ReturnX(), beetle[i].ReturnY());    // 벌레 시작 장소를 VISITED로 변경
            check++;    // check 증가 
        }
    }

    timer->Reset();     // 시간을 측정하는 timer 객체에 Reset()함수를 호출해 시작 시간을 설정한다.
    while (1) {

        for (int i = 0; i < num; i++) {
            direction = (int)((double)rand() / (RAND_MAX + 1) * 8);
            beetle[i].Move(&room, size, count, check, direction); // 랜덤한 숫자를 매개변수로 넣어서 벌레의 이동 방향을 설정하고 그 위치로 이동한다.
        }

        if (print_input == 1) { // 벌레의 움직임을 출력하는 모드라면
            system("cls");
            CursorInvisible();  // 커서를 보이지 않도록 설정한다.
            room.PrintRoom(order, *runtime = timer->ElapsedTime(), count);  // 벌레의 움직임을 출력한다.
        }

        else
            *runtime = timer->ElapsedTime();    // 실행 시간을 반환해주는 ElapsedTimer() 함수 호출

        if (AllVisited(size, check)) {  // 모든 방을 방문했다면 탈출
            //system("cls");
            if (print_input == 1) {
                room.RoomCursor(5, (2 + size) + 3);
                cout << "모든 방을 방문했습니다.";
            }
            Sleep(1000);
            break;
        }

        if (limit_input == 1 && count >= limit) {   // 벌레의 이동 횟수를 제한하는 모드이고 이동 횟수가 제한 이동 횟수를 초과했다면 탈출
            if (print_input == 1) {
                notvisit = (size * size) - check;   // 벌레가 방문하지 못한 방 개수를 조사한다.

                room.RoomCursor(5, (2 + size) + 3);
                cout << limit << "번 이동했지만 모든 방을 방문하지 못했습니다.";
                room.RoomCursor(5, (2 + size) + 3 + 1);
                cout << notvisit << "개의 방을 방문하지 못했습니다.";
            }
            Sleep(1000);
            break;
        }
    }

    if (limit_input == 1 && count >= limit) // 벌레의 이동 횟수를 제한하는 모드이고 이동 횟수가 제한 이동 횟수를 초과했다면
        data->Measure(FAIL, FAIL);  // 이동 횟수와 소요 시간을 FAIL로 기록
    
    else    // 모든 방을 방문했다면
        data->Measure(count, *runtime); // 이동 횟수와 소요 시간을 기록

    delete[] beetle;
    delete runtime;
}


bool AllVisited(int size, int check) {  // 모든 방을 방문했는지 검사하는 함수
    return (check == (size * size));    // check 변수의 값이 방의 개수와 같다면 true를 리턴
}

void CursorInvisible() {
    CONSOLE_CURSOR_INFO ci = { 100, FALSE };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ci);
}