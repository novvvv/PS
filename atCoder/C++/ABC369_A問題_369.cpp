#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a == b) cout << "1" << '\n';
    else if ((a + b) % 2 == 0) cout << "3" << '\n';
    else cout << "2" << '\n';
}
