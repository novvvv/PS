#include <iostream>
using namespace std;
int main(void){
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        if ( i == n) {
            cout << n;
            break;
        }
        cout << i << " ";
    }
    cout << endl;
    
    for (int i = 1; i <= m; i++) {
        if (i == m) {
            cout << m;
            break;
        }
        cout << i << " ";
    }
}
