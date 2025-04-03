#include <iostream>
#include <string>
#include <deque>
#include <vector>
using namespace std; 

vector<string> parsing_str(string str) {
    vector<string> cmd_info;
    int idx = str.find(" ");
    cmd_info.push_back(str.substr(0, idx));
    cmd_info.push_back(str.substr(idx + 1));
    return cmd_info;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    cin.ignore();
    
    deque<int> dq; 
    for (int i = 0; i < n; i++) {

        string cmd; 
        getline(cin, cmd);

        if (cmd == "size") {
            cout << dq.size() << '\n';
        } 

        else if (cmd == "empty") {
            if (dq.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }

        else if (cmd == "front") {
            if (dq.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << dq.front() << '\n';
            }
        }

        else if (cmd == "back") {
            if (dq.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << dq.back() << '\n';
            }
        }

        else if (cmd == "pop_front") {
            if (dq.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }

        else if (cmd == "pop_back") {
            if (dq.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }

        else {
            string first_cmd = parsing_str(cmd)[0];
            int second_cmd = stoi(parsing_str(cmd)[1]);
            if (first_cmd == "push_front") {
                dq.push_front(second_cmd);
            }
            else if (first_cmd == "push_back") {
                dq.push_back(second_cmd);
            }
        }
    }

}
