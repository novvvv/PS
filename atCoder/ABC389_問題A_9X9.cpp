#include <iostream>
#include <string>
using namespace std;

int main() {

    string n;
    cin >> n;
    int idx = n.find("x");
    string before = "";
    for (int i = 0; i < idx; i++) {
        before += n[i];
    }
    string after = "";
    for (int i = idx + 1; i < n.length(); i++) {
        after += n[i];
    }

    cout << stoi(before) * stoi(after) << endl;

    return 0;
}
