#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    if (a == 60 && b == 60 && c == 60) {
        cout << "Equilateral" << '\n';
    }
    else if (a + b + c == 180) {
        if ((a == b) || (b == c) || (c == a)) {
            cout << "Isosceles" << '\n';
        }
        if ((a != b) && (b != c) && (c != a)) {
            cout << "Scalene" << '\n';
        }
    }
    else {
        cout << "Error" << '\n';
    }

    return 0;
}
