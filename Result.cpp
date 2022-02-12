#include "Result.h"

void SaveResult(int print_input, int roop, int size, int num, int limit_input, int limit, int* count, double* time, int total_count, double total_time) {
    // ��� ���, ���� ���, ���� Ƚ��, �� �ݺ� Ƚ��, ���� ũ��, ���� ��, �� ���ະ �̵� Ƚ��, �ҿ� �ð�, �� �ҿ� �ð�, �̵� Ƚ��, ��� �ҿ� �ð�, �̵� Ƚ���� .txt ���Ͽ� �����Ѵ�.
    int success = 0;
    ofstream fout("result.txt");    // .txt���Ͽ� �����Ѵ�.

    if (!fout) {
        cout << "���� ���� ����" << endl;
    }

    fout << "------- ���� ��� -------" << endl << endl;

    if (print_input == 1)
        fout << "������ ������ ���: Yes" << endl;
    else
        fout << "������ ������ ���: No" << endl;

    fout << "�� ���� Ƚ��: " << roop << "��" << endl;
    fout << "���� ũ��: " << size << endl;
    fout << "���� ��: " << num << endl;
    
    if (limit_input == 1) {
        fout << "���� �̵� Ƚ�� ����: Yes" << endl << endl;
        fout << "\t->���� �̵� Ƚ��: " << limit << "��" << endl << endl;
    }

    else
        fout << "���� �̵� Ƚ�� ����: No" << endl << endl;

    fout << "------- ���� ��� -------" << endl << endl;

    for (int i = 0; i < roop; i++) {
        if (count[i] != -1) {
            fout << i + 1 << "��° �õ�" << endl;
            fout << "�̵� Ƚ�� = " << count[i] << "��" << endl;
            fout << "�ҿ� �ð� = " << time[i] << "��" << endl;
            fout << endl << endl;
            success++;
        }
        else {
            fout << i + 1 << "��° �õ�" << endl;
            fout << "�̵� Ƚ�� = " << "xxx��" << endl;
            fout << "�ҿ� �ð� = " << "xxx��" << endl;
            fout << endl << endl;
        }
    }

    if (success < roop)
        fout << "���� Ƚ�� = " << success << "��" << endl << endl;

    fout << "�� �̵� Ƚ�� = " << total_count << "��" << endl;
    fout << "�� �ҿ� �ð� = " << total_time << "��" << endl << endl;

    fout << "��� �̵� Ƚ�� = " << (double)total_count / roop << "��" << endl;
    fout << "��� �ҿ� �ð� = " << total_time / roop << "��" << endl;

    fout.close();
}