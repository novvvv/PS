#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i + 1; j < s.length(); j++) {
            for (int k = j + 1; k < s.length(); k++) {
                if ((j - i)  == (k - j) && s[i] == 'A' && s[j] == 'B' && s[k] == 'C') {
                    ans++;
                }
            }
        }
    }
    cout << ans <<'\n';
}
