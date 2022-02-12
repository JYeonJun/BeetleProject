#include "Data.h"

Data::Data(int roop):roop_(roop), total_count_(0), count_(NULL), total_time_(0), time_(NULL), order_(0) {   
    count_ = new int[roop_];    // �� ���ະ �̵� Ƚ���� �����ϴ� �迭 ����
    time_ = new double[roop_];  // �� ���ະ �ҿ� �ð��� �����ϴ� �迭 ����

    for (int i = 0; i < roop_; i++) {   // �迭�� ��� ���� -1�� �ʱ�ȭ
        count_[i] = -1;
        time_[i] = -1;
    }
}

Data::~Data() { // Data ��ü �Ҹ� �� �����Ҵ� ����
    delete[] count_;
    delete[] time_;
}

void Data::Measure(int count, double time) {    // �̵� Ƚ���� �ҿ� �ð��� �����ϴ� �Լ�
    if (count != -1) {
        total_count_ += count;  // �� �̵� Ƚ���� �� ���ະ �̵� Ƚ���� �����ش�.
        count_[order_] = count; // �� ���ະ �̵�Ƚ���� �迭�� �����Ѵ�.
        total_time_ += time;    // �� �ҿ� �ð��� �� ���ະ �ҿ� �ð��� �����ش�.
        time_[order_] = time;   // �� ���ະ �ҿ� �ð��� �迭�� �����Ѵ�.
    }
    order_++;   // ���° �ݺ����� �� �� �ֵ��� �ѹ� ���� ������ order_�� ����
}

void Data::PrintData(int print_input, int roop, int size, int num, int limit_input, int limit) {    // ���α׷� ���� �� ��� ������ ���â�� ����ϴ� �Լ�
    int success = 0;    // ���� Ƚ���� �˻��ϰ� �����ϴ� ����
    
    system("cls");

    cout << "---------- ��� ��� ----------" << endl << endl;

    cout << "�� " << roop_ << "�� ����" << endl << endl;

    for (int i = 0; i < roop_; i++) {   // �� ���ະ �̵� Ƚ���� �ҿ� �ð��� ����Ѵ�.
        if (count_[i] != -1) {
            cout << i + 1 << "��° �õ�" << endl;
            cout << "�̵� Ƚ�� = " << count_[i] << "��" << endl;
            cout << "�ҿ� �ð� = " << time_[i] << "��" << endl;
            cout << endl << endl;
            success++;
        }
        else {
            cout << i + 1 << "��° �õ�" << endl;
            cout << "�̵� Ƚ�� = " << "xxx��" << endl;
            cout << "�ҿ� �ð� = " << "xxx��" << endl;
            cout << endl << endl;
        }
    }

    if(success < roop_) // �̵� Ƚ���� ���ѹ��� ����� ���� Ƚ���� ����Ѵ�.
        cout << "���� Ƚ�� = " << success << "��" << endl << endl;

    cout << "�� �̵� Ƚ�� = " << total_count_ << "��" << endl;
    cout << "�� �ҿ� �ð� = " << total_time_ << "��" << endl << endl;

    cout << "��� �̵� Ƚ�� = " << (double)total_count_ / roop_ << "��" << endl;
    cout << "��� �ҿ� �ð� = " << total_time_ / roop_ << "��" << endl;

    SaveResult(print_input, roop, size, num, limit_input, limit, count_, time_, total_count_, total_time_); // .txt ���Ͽ� ��� ������ �����ϴ� �Լ� ȣ��
}