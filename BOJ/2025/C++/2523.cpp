#include <iostream>
#include <map>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= (2 * n - 1) / 2 + 1; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << '\n';
    }

    for (int i = 1; i <= (2 * n - 1) / 2; i++) {
        for (int j = (2 * n - 1) / 2; j >= i; j--) {
            cout << "*";
        }
        cout << '\n';
    }


    return 0;
}


