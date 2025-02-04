#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    bool isGeo = true;

    // 등비수열을 판단할 공비 r (정수 비율 비교 방식)
    for (int i = 1; i < n - 1; i++) {
        if (numbers[i + 1] * numbers[0] != numbers[i] * numbers[1]) {
            isGeo = false;
            break;
        }
    }

    cout << (isGeo ? "Yes" : "No") << endl;
    return 0;
}
