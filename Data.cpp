#include "Data.h"

Data::Data(int roop):roop_(roop), total_count_(0), count_(NULL), total_time_(0), time_(NULL), order_(0) {   
    count_ = new int[roop_];    // 각 시행별 이동 횟수를 저장하는 배열 생성
    time_ = new double[roop_];  // 각 시행별 소요 시간을 저장하는 배열 생성

    for (int i = 0; i < roop_; i++) {   // 배열의 모든 값을 -1로 초기화
        count_[i] = -1;
        time_[i] = -1;
    }
}

Data::~Data() { // Data 객체 소멸 시 동적할당 해제
    delete[] count_;
    delete[] time_;
}

void Data::Measure(int count, double time) {    // 이동 횟수와 소요 시간을 저장하는 함수
    if (count != -1) {
        total_count_ += count;  // 총 이동 횟수에 각 시행별 이동 횟수를 더해준다.
        count_[order_] = count; // 각 시행별 이동횟수를 배열에 저장한다.
        total_time_ += time;    // 총 소요 시간에 각 시행별 소요 시간을 더해준다.
        time_[order_] = time;   // 각 시행별 소요 시간을 배열에 저장한다.
    }
    order_++;   // 몇번째 반복인지 알 수 있도록 한번 끝날 때마다 order_값 증가
}

void Data::PrintData(int print_input, int roop, int size, int num, int limit_input, int limit) {    // 프로그램 종료 시 모든 정보를 결과창에 출력하는 함수
    int success = 0;    // 성공 횟수를 검사하고 저장하는 변수
    
    system("cls");

    cout << "---------- 결과 출력 ----------" << endl << endl;

    cout << "총 " << roop_ << "번 실행" << endl << endl;

    for (int i = 0; i < roop_; i++) {   // 각 시행별 이동 횟수와 소요 시간을 출력한다.
        if (count_[i] != -1) {
            cout << i + 1 << "번째 시도" << endl;
            cout << "이동 횟수 = " << count_[i] << "번" << endl;
            cout << "소요 시간 = " << time_[i] << "초" << endl;
            cout << endl << endl;
            success++;
        }
        else {
            cout << i + 1 << "번째 시도" << endl;
            cout << "이동 횟수 = " << "xxx번" << endl;
            cout << "소요 시간 = " << "xxx초" << endl;
            cout << endl << endl;
        }
    }

    if(success < roop_) // 이동 횟수를 제한받은 모드라면 성공 횟수를 출력한다.
        cout << "성공 횟수 = " << success << "번" << endl << endl;

    cout << "총 이동 횟수 = " << total_count_ << "번" << endl;
    cout << "총 소요 시간 = " << total_time_ << "초" << endl << endl;

    cout << "평균 이동 횟수 = " << (double)total_count_ / roop_ << "번" << endl;
    cout << "평균 소요 시간 = " << total_time_ / roop_ << "초" << endl;

    SaveResult(print_input, roop, size, num, limit_input, limit, count_, time_, total_count_, total_time_); // .txt 파일에 모든 정보를 저장하는 함수 호출
}