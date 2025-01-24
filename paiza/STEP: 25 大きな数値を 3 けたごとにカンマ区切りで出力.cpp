#include <iostream>
#include <string>
using namespace std;
int main(void){
    string input_data;
    cin >> input_data;
    int cnt = 0;
    for (int i = 0; i < input_data.size(); i++) {
        cout << input_data[i];
        cnt++;
        if (cnt % 3 == 0) {
            if (cnt == input_data.size()) {
                break;
            }
            cout << ",";
        }
        
    }
    return 0;
}
