#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    string s;
    cin >> n >> s;
    int c1 = 0;
    for (char c: s) {
        if (c == '1') c1++;
    }
    
    int now = 0; // 현재까지 나온 1의 개수 (L)
    long long ans = 0;
    // 0101001
    for (char c: s) {
        if (c == '0') {
            ans += min(now, c1 - now); // c1 - now 앞으로 남은 1의 개수 (R)
        } else {
            now++;
        }
    }
    
    cout << ans << endl;
}
