#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == n) {
                cout << i * j;
                continue;
            }
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}
