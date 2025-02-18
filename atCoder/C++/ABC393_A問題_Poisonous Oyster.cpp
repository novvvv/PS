#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == "sick" && s2 == "sick") cout << "1" << '\n';
    else if (s1 == "sick" && s2 == "fine") cout << "2" << '\n';
    else if (s1 == "fine" && s2 == "sick") cout << "3" << '\n';
    else cout << "4" << '\n';
    // taka : 1, 2
    // ao : 1, 3

    return 0;
}


