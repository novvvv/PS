#include <iostream>
using namespace std;
int main() {

    int n; // 용의자 수 
    cin >> n;
    string name; 
    string target;
    for (int i = 0; i < n; i++) {
        cin >> name; 
        for (int i = 0; i < name.size(); i++) {
            if (name[i] == 'S') {
                target = name;
            }
        }
    }

    cout << target << '\n';

}

