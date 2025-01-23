#include <iostream>
using namespace std;

int n;
int operands[11];
int operators[4]; // +, - , * , %
int min_num = 1000000001;
int max_num = -1000000001;

void back_track(int res, int idx) {

    // base condition : 식 완성
    if (idx == n) {
        if (res > max_num) max_num = res;
        if (res < min_num) min_num = res;
        return;
    }

    // 2 1 1 1
    for (int i = 0; i < 4; i++) {
        if (operators[i] > 0) {
            operators[i]--; // 연산자 사용
            if (i == 0) back_track(res + operands[idx], idx + 1); // +
            else if (i == 1) back_track(res - operands[idx], idx + 1); // -
            else if (i == 2) back_track(res * operands[idx], idx + 1); // *
            else back_track(res / operands[idx], idx + 1); // %
            operators[i]++; // 원복
        }
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> operands[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> operators[i];
    }
    back_track(operands[0], 1);
    cout << max_num << '\n';
    cout << min_num;

    // 1, 2, 3, 4, 5, 6
    // + 2개, - 1개, x 1개, % 1개
    // 5C2 * 3C1 * 2C1 * 1C1 = 5!
    // 10 * 3 * 2 = 60


    return 0;
}

