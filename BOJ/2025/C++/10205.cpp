#include <iostream>
#include <string>
using namespace std;

int main() {
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {

        int h;
        cin >> h;
        string cmd; 
        cin >> cmd;
        cout << "Data Set " << i + 1 << ":" << '\n';
        for (int j = 0; j < cmd.size(); j++) {
            if (cmd[j] == 'c') {
                h++;
            }
            else if (cmd[j] == 'b') {
                h--;
            }
        }
        cout << h << '\n';
        cout << '\n';
    }

    // c : 불로 지지지 않고 머리만 지진다. 
    // b : 머리를 자를 후 불로 지진다. 

}
// 머리 한 개를 날리면 2개의 새 머리가 나온다.
// 히드라는 머리 한 개 이상이 남아있으면 죽지 않는다. 
// 머리를 자를 때 밑동에 불을 지지면 머리가 다시 자라나지 않는다. 

// 1. 히드라의 머리를 자른다.
// 2. 자름과 동시에 불로 지진다 
