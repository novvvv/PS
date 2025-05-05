/*
 * BOJ 1244
 * ID : nov2pro
 * Date : 2025.05.05 
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    cin.tie(0);
    
    int s;
    cin >> s; // 스위치 개수는 100 이하인 양의 정수
    
    // 둘째 줄에는 각 스위치의 상태가 주어진다. (켜져있으면 1, 꺼져있으면 0)
    vector<int> switch_vec;
    for (int i = 0; i < s; i++) {
        int switch_status;
        cin >> switch_status;
        switch_vec.push_back(switch_status);
    }
    
    int info;
    cin >> info;
    for (int i = 0; i < info; i++) {
        
        int student_info, switch_info;
        cin >> student_info >> switch_info;
        
        // #Case1 : 남학생 -> 자신이 받은 스위치의 배수 상태를 모두 변경
        if (student_info == 1) {
            for (int j = 0; j < s; j++) {
                if ((j + 1) % switch_info == 0) {
                    if (switch_vec[j] == 1)
                        switch_vec[j] = 0;
                    else switch_vec[j] = 1;
                }
            }
        }
        
        // #Case2 : 여학생 -> 자신이 받은 스위치를 기준으로 좌우 대칭
        if (student_info == 2) {
            
            switch_info--;
            
            // 현재 스위치 번호의 상태를 변경
            if (switch_vec[switch_info] == 0) switch_vec[switch_info] = 1;
            else switch_vec[switch_info] = 0;
            
            for (int j = 1; j <= s; j++) {
                // 범위 초과시 break
                if ((switch_info - j) < 0 || (switch_info + j) >= s) {
                    break;
                }
                if (switch_vec[switch_info - j] == switch_vec[switch_info + j]) {
                    if (switch_vec[switch_info - j] == 0) {
                        switch_vec[switch_info - j] = 1;
                        switch_vec[switch_info + j] = 1;
                    }
                    else {
                        switch_vec[switch_info - j] = 0;
                        switch_vec[switch_info + j] = 0;
                    }
                }
                else
                    break;
            }
            
        }
        
    }
    
    for (int i = 0; i < s; i++) {
        
        if ((i + 1) == s) {
            cout << switch_vec[i];
        }
        else if ((i + 1) % 10 == 0) {
            cout << switch_vec[i] << '\n';
        }
        else {
            cout << switch_vec[i] << " ";
        }
    }
    cout << endl;
    
}

// 0 1 0 1 0 0 0 1
// [1, 3]
// 0 1 [1] 1 0 [1] 0 1
// [2, 3]


// 1 : 켜져있음, 0 : 꺼져있음
// 1 이상 스위치 개수 이하인 자연수를 하나씩 나눠준다.

// 남학생 -> 스위치 번호가 자신이 받은 수의 배수면 상태를 바꾼다.
// 예시로 남학생이 3번을 받았다. -> 3번, 6번 스위치의 상태를 모두 바꾼다.

// 여학생 -> 자기가 받은 수와 같은 번호가 붙은 스위치를 중심으로 ..
// 좌우가 대칭이면서 "가장 많은 스위치를 포함하는 구간"을 찾아 스위치를 모두 바꾼다.
// 해당 구간에 속한 스위치는 항상 홀수이다.
