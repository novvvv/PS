#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                cout << j;
                break;
            }
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
