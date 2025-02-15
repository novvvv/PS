#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; // 2 ~ 300000
    cin >> n;
    int p[300001] = {0, };
    int q[300001] = {0, };
    map<int, int> people;
    for (int i = 1; i <= n; i++) cin >> p[i]; // i번째 사람이 발견한 사람
    for (int i = 1; i <= n; i++) cin >> q[i]; // I번째 사람이 입고있는 번호표

    for (int i = 1; i <= n; i++) {
        people[q[i]] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << q[p[people[i]]] << " ";
    }
    cout << '\n';

    return 0;
}


