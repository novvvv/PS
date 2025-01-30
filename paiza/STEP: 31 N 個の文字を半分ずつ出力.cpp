#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    for (int i = 1; i <= n / 2; i++) {
        if (i == n / 2) {
            cout << i;
            break;
        }
        cout << i << " ";
    }
    cout << endl;
    for (int j = n / 2 + 1; j <= n; j++) {
        if (j == n) {
            cout << j;
            break;
        }
        cout << j << " ";
    }
    cout << endl;
    return 0;
}
