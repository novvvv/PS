#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if (a1 * a2 == a3) cout << "Yes" << '\n';
    else if (a1 * a3 == a2) cout << "Yes" << '\n';
    else if (a2 * a3 == a1) cout << "Yes" << '\n';
    else cout << "No" << '\n';

    return 0;
}
