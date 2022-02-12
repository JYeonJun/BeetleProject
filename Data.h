#ifndef _MY_DATA_
#define _MY_DATA_

#include "public.h"
#include "Result.h"

class Data {
public:
    Data(int roop); // �� �ݺ� Ƚ���� �Ű������� �޾� ������ ����
    ~Data();    // �����Ҵ� ���� count_, time_ ���� ����
    void  Measure(int, double); // �̵�Ƚ���� �ҿ� �ð� ���� �Ű������� �޾� �����ϴ� �Լ�
    void PrintData(int, int, int, int, int, int);   // ��� ������ ��� â�� ����ϴ� �Լ�

private:
    int roop_;  // �� �ݺ� Ƚ��
    int total_count_;   // �� �̵�Ƚ��
    int* count_;    // �� �õ��� �̵�Ƚ��
    double total_time_; // �� �ҿ�ð�
    double* time_;   // �� �õ��� �ҿ�ð�
    int order_;  // ���° �õ����� �� �� �ִ� ����
};

#endif