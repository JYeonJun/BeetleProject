#include "Play.h"

void Setting() {
    int size = 0;   // ���� ũ��
    int limit_input = 0;  // �̵� Ƚ�� ���� ���� ����
    int limit = 0;   // ���� ���� �̵�Ƚ��
    int print_input = 0;    // ���� ������ ������� �����ϴ� ����
    int num = 0;    // ���� ������
    int roop = 0;   // �� �ݺ� Ƚ�� �Է�

    while (1) { // ��� ���, �̵� Ƚ�� ���� ���, ���� �̵� Ƚ��, �� �ݺ� Ƚ��, �� ũ��, ���� ���� �Է� �޴´�.
        try {
            cout << "----------------DrunkenBeetle Setting--------------------" << endl << endl;

            cout << "��� ����" << endl;
            cout << "1. ��� ���(������ ������ ���)" << endl;
            cout << "2. ���� ���(������ ������ ���X)" << endl << endl;
            cout << "�Է�: ";
            cin >> print_input;

            if (print_input != 1 && print_input != 2)
                throw print_input;

            system("cls");
            cout << "----------------DrunkenBeetle Setting--------------------" << endl << endl;
            if (print_input == 1)
                cout << "���: ��� ���" << endl << endl;
            else
                cout << "���: ���� ���" << endl << endl;

            cout << "���� ��� ����" << endl;
            cout << "1. �̵� Ƚ�� ���� Yes" << endl;
            cout << "2. �̵� Ƚ�� ���� No" << endl << endl;
            cout << "�Է�: ";
            cin >> limit_input;

            if (limit_input != 1 && limit_input != 2)
                throw limit_input;

            system("cls");
            cout << "----------------DrunkenBeetle Setting--------------------" << endl << endl;
            if (print_input == 1 && limit_input == 1) {
                cout << "���: ��� ���" << endl;
                cout << "�̵� Ƚ�� ����: Yes" << endl << endl;
            }

            else if (print_input == 1 && limit_input == 2) {
                cout << "���: ��� ���" << endl;
                cout << "�̵� Ƚ�� ����: No" << endl << endl;
            }

            else if (print_input == 2 && limit_input == 1) {
                cout << "���: ���� ���" << endl;
                cout << "�̵� Ƚ�� ����: Yes" << endl << endl;
            }

            else {
                cout << "���: ���� ���" << endl;
                cout << "�̵� Ƚ�� ����: No" << endl << endl;
            }

            if (limit_input == 1) {
                cout << endl << "���� Ƚ�� �Է�: ";
                cin >> limit;

                if (limit < 1)
                    throw limit;
            }    

            system("cls");
            cout << "----------------DrunkenBeetle Setting--------------------" << endl << endl;
            if (print_input == 1 && limit_input == 1) {
                cout << "���: ��� ���" << endl;
                cout << "�̵� Ƚ�� ����: Yes" << endl;
                cout << "���� Ƚ��: " << limit << endl << endl;
            }

            else if (print_input == 1 && limit_input == 2) {
                cout << "���: ��� ���" << endl;
                cout << "�̵� Ƚ�� ����: No" << endl << endl;
            }

            else if (print_input == 2 && limit_input == 1) {
                cout << "���: ���� ���" << endl;
                cout << "�̵� Ƚ�� ����: Yes" << endl;
                cout << "���� Ƚ��: " << limit << endl << endl;
            }

            else {
                cout << "���: ���� ���" << endl;
                cout << "�̵� Ƚ�� ����: No" << endl << endl;
            }
            
            cout << "���� Ƚ�� �Է�: ";
            cin >> roop;

            if (roop < 1)
                throw roop;

            system("cls");
            cout << "----------------DrunkenBeetle Setting--------------------" << endl << endl;
            if (print_input == 1 && limit_input == 1) {
                cout << "���: ��� ���" << endl;
                cout << "�̵� Ƚ�� ����: Yes" << endl;
                cout << "���� Ƚ��: " << limit << endl;
            }

            else if (print_input == 1 && limit_input == 2) {
                cout << "���: ��� ���" << endl;
                cout << "�̵� Ƚ�� ����: No" << endl;
            }

            else if (print_input == 2 && limit_input == 1) {
                cout << "���: ���� ���" << endl;
                cout << "�̵� Ƚ�� ����: Yes" << endl;
                cout << "���� Ƚ��: " << limit << endl;
            }

            else {
                cout << "���: ���� ���" << endl;
                cout << "�̵� Ƚ�� ����: No" << endl;
            }

            cout << "���� Ƚ��: " << roop << endl << endl;

            cout << "���� ũ�� �Է�" << endl;
            if (print_input == 1) {
                cout << "���� ũ�� n �Է�(n�� 20 ����)" << endl;
                cout << "n*n ũ�� �� ����" << endl;
                cout << "�Է�: ";
                cin >> size;
                
                if (size <= 1 || size > 20)
                    throw size;
           }

            else {
                cout << endl << "���� ũ�� n �Է�" << endl;
                cout << "n*n ũ�� �� ����" << endl;
                cout << "�Է�: ";
                cin >> size;

                if (size <= 1)
                    throw size;
            }

            system("cls");
            cout << "----------------DrunkenBeetle Setting--------------------" << endl << endl;
            if (print_input == 1 && limit_input == 1) {
                cout << "���: ��� ���" << endl;
                cout << "�̵� Ƚ�� ����: Yes" << endl;
                cout << "���� Ƚ��: " << limit << endl;
            }

            else if (print_input == 1 && limit_input == 2) {
                cout << "���: ��� ���" << endl;
                cout << "�̵� Ƚ�� ����: No" << endl;
            }

            else if (print_input == 2 && limit_input == 1) {
                cout << "���: ���� ���" << endl;
                cout << "�̵� Ƚ�� ����: Yes" << endl;
                cout << "���� Ƚ��: " << limit << endl;
            }

            else {
                cout << "���: ���� ���" << endl;
                cout << "�̵� Ƚ�� ����: No" << endl;
            }

            cout << "���� Ƚ��: " << roop << "��" << endl;

            cout << "���� ũ��: " << size << endl << endl;

            cout << "���� �� �Է�: ";
            cin >> num;

            break;
        }
        catch (int error) {
            cout << "���Է� ���ֽÿ�." << endl;
            system("pause");
            system("cls");
        }
    }

    Data data(roop);    // ������ �̵� Ƚ���� �ҿ� �ð��� ������ ��� â�� ����ϴ� ��ü ����
    Timer timer;    // ������ ��� ���� �湮�ϴ� �ð��� �������ִ� ��ü
    for(int i = 0; i < roop; i++)
        Play(&data, &timer, print_input, size, num, limit_input, limit, i); // �Է¹��� �������� ������ ������ �����̴� �Լ��� ����ϴ� �Լ��� ȣ���ϴ� �Լ�

    data.PrintData(print_input, roop, size, num, limit_input, limit);   // data��ü�� ����� �������� ��� â�� ����ϴ� �Լ� ȣ��
}

void Play(Data* data, Timer* timer, int print_input, int size, int num, int limit_input, int limit, int order) {    // ������ �����̴� �Լ��� ����ϴ� �Լ��� ȣ���ϴ� �ֿ� �Լ�
    int count = 0;  // ���� �̵�Ƚ��
    int check = 0;   // ���ο� ���� �湮�� ������ ������Ű�� ����
    int notvisit = 0;   // �湮���� ���� �� ����
    int direction = 0;  // ������ ���� ��ġ�� �������ִ� ����
    double* runtime = new double(0);    // ���� ������ ��� �Լ��� �Ű������� �� �ð��� ��Ÿ���� ����
    Beetle* beetle = new Beetle[num];   // ���� ����ŭ Beetle Ŭ���� ��ü �����Ҵ�

    srand((unsigned)time(NULL));

    Room room(size);    // �Է� ���� ���� ũ��� �� ����

    for (int i = 0; i < num; i++) { // ������ ����ŭ ���� ��ġ ����
        int x = (int)(rand() % size);   // ������ ���� x��ǥ�� �����ϰ� ����
        int y = (int)(rand() % size);   // ������ ���� y��ǥ�� �����ϰ� ����
        beetle[i].SetX(x);  // ������ x��ǥ�� ������ ���� �Է�
        beetle[i].SetY(y);  // ������ y��ǥ�� ������ ���� �Է�

        if (!room.VisitCheck(beetle[i].ReturnX(), beetle[i].ReturnY())) { // �湮���� �ʾҴ� ���̶��
            room.CheckVisited(beetle[i].ReturnX(), beetle[i].ReturnY());    // ���� ���� ��Ҹ� VISITED�� ����
            check++;    // check ���� 
        }
    }

    timer->Reset();     // �ð��� �����ϴ� timer ��ü�� Reset()�Լ��� ȣ���� ���� �ð��� �����Ѵ�.
    while (1) {

        for (int i = 0; i < num; i++) {
            direction = (int)((double)rand() / (RAND_MAX + 1) * 8);
            beetle[i].Move(&room, size, count, check, direction); // ������ ���ڸ� �Ű������� �־ ������ �̵� ������ �����ϰ� �� ��ġ�� �̵��Ѵ�.
        }

        if (print_input == 1) { // ������ �������� ����ϴ� �����
            system("cls");
            CursorInvisible();  // Ŀ���� ������ �ʵ��� �����Ѵ�.
            room.PrintRoom(order, *runtime = timer->ElapsedTime(), count);  // ������ �������� ����Ѵ�.
        }

        else
            *runtime = timer->ElapsedTime();    // ���� �ð��� ��ȯ���ִ� ElapsedTimer() �Լ� ȣ��

        if (AllVisited(size, check)) {  // ��� ���� �湮�ߴٸ� Ż��
            //system("cls");
            if (print_input == 1) {
                room.RoomCursor(5, (2 + size) + 3);
                cout << "��� ���� �湮�߽��ϴ�.";
            }
            Sleep(1000);
            break;
        }

        if (limit_input == 1 && count >= limit) {   // ������ �̵� Ƚ���� �����ϴ� ����̰� �̵� Ƚ���� ���� �̵� Ƚ���� �ʰ��ߴٸ� Ż��
            if (print_input == 1) {
                notvisit = (size * size) - check;   // ������ �湮���� ���� �� ������ �����Ѵ�.

                room.RoomCursor(5, (2 + size) + 3);
                cout << limit << "�� �̵������� ��� ���� �湮���� ���߽��ϴ�.";
                room.RoomCursor(5, (2 + size) + 3 + 1);
                cout << notvisit << "���� ���� �湮���� ���߽��ϴ�.";
            }
            Sleep(1000);
            break;
        }
    }

    if (limit_input == 1 && count >= limit) // ������ �̵� Ƚ���� �����ϴ� ����̰� �̵� Ƚ���� ���� �̵� Ƚ���� �ʰ��ߴٸ�
        data->Measure(FAIL, FAIL);  // �̵� Ƚ���� �ҿ� �ð��� FAIL�� ���
    
    else    // ��� ���� �湮�ߴٸ�
        data->Measure(count, *runtime); // �̵� Ƚ���� �ҿ� �ð��� ���

    delete[] beetle;
    delete runtime;
}


bool AllVisited(int size, int check) {  // ��� ���� �湮�ߴ��� �˻��ϴ� �Լ�
    return (check == (size * size));    // check ������ ���� ���� ������ ���ٸ� true�� ����
}

void CursorInvisible() {
    CONSOLE_CURSOR_INFO ci = { 100, FALSE };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ci);
}