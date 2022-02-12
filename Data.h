#ifndef _MY_DATA_
#define _MY_DATA_

#include "public.h"
#include "Result.h"

class Data {
public:
    Data(int roop); // 총 반복 횟수를 매개변수로 받아 생성자 실행
    ~Data();    // 동적할당 받은 count_, time_ 변수 해제
    void  Measure(int, double); // 이동횟수와 소요 시간 값을 매개변수로 받아 저장하는 함수
    void PrintData(int, int, int, int, int, int);   // 모등 정보를 결과 창에 출력하는 함수

private:
    int roop_;  // 총 반복 횟수
    int total_count_;   // 총 이동횟수
    int* count_;    // 각 시도별 이동횟수
    double total_time_; // 총 소요시간
    double* time_;   // 각 시도별 소요시간
    int order_;  // 몇번째 시도인지 알 수 있는 변수
};

#endif