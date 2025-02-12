#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int arr[1001] = {0, };
    int input_data;
    for (int i = 0; i < b; i++) {
        cin >> input_data;
        arr[input_data] = 1;
    }

    cout << a - b << '\n';
    for (int i = 1; i <= a; i++) {
        if (arr[i] != 1) {
            cout << i << " ";
        }
    }
    cout << '\n';

    return 0;
}
