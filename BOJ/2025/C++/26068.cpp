#include <iostream>
#include <string>
using namespace std; 

int main() {
    int n;
    cin >> n; 
    string info;
    int res = 0;
    for (int i = 0; i < n; i++) {
        cin >> info;
        string day = "";
        for (int i = 0; i < info.size(); i++) {
            if (isdigit(info[i])) {
                day += info[i];
            }
        }
        int left_day = stoi(day);
        if (left_day <= 90) res++;
    }
    cout << res << '\n';
}
