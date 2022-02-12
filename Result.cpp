#include "Result.h"

void SaveResult(int print_input, int roop, int size, int num, int limit_input, int limit, int* count, double* time, int total_count, double total_time) {
    // 출력 모드, 제한 모드, 제한 횟수, 총 반복 횟수, 방의 크기, 벌레 수, 각 시행별 이동 횟수, 소요 시간, 총 소요 시간, 이동 횟수, 평균 소요 시간, 이동 횟수를 .txt 파일에 저장한다.
    int success = 0;
    ofstream fout("result.txt");    // .txt파일에 연결한다.

    if (!fout) {
        cout << "파일 열기 에러" << endl;
    }

    fout << "------- 설정 출력 -------" << endl << endl;

    if (print_input == 1)
        fout << "벌레의 움직임 출력: Yes" << endl;
    else
        fout << "벌레의 움직임 출력: No" << endl;

    fout << "총 실행 횟수: " << roop << "번" << endl;
    fout << "방의 크기: " << size << endl;
    fout << "벌레 수: " << num << endl;
    
    if (limit_input == 1) {
        fout << "벌레 이동 횟수 제안: Yes" << endl << endl;
        fout << "\t->제한 이동 횟수: " << limit << "번" << endl << endl;
    }

    else
        fout << "벌레 이동 횟수 제안: No" << endl << endl;

    fout << "------- 실행 결과 -------" << endl << endl;

    for (int i = 0; i < roop; i++) {
        if (count[i] != -1) {
            fout << i + 1 << "번째 시도" << endl;
            fout << "이동 횟수 = " << count[i] << "번" << endl;
            fout << "소요 시간 = " << time[i] << "초" << endl;
            fout << endl << endl;
            success++;
        }
        else {
            fout << i + 1 << "번째 시도" << endl;
            fout << "이동 횟수 = " << "xxx번" << endl;
            fout << "소요 시간 = " << "xxx초" << endl;
            fout << endl << endl;
        }
    }

    if (success < roop)
        fout << "성공 횟수 = " << success << "번" << endl << endl;

    fout << "총 이동 횟수 = " << total_count << "번" << endl;
    fout << "총 소요 시간 = " << total_time << "초" << endl << endl;

    fout << "평균 이동 횟수 = " << (double)total_count / roop << "번" << endl;
    fout << "평균 소요 시간 = " << total_time / roop << "초" << endl;

    fout.close();
}