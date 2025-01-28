#include <iostream>
using namespace std;
int main(void){
    int num_arr[9];
    for (int i = 0 ; i < 9; i++) {
        cin >> num_arr[i];
    }
    for (int i = 1; i <= 9; i++) {
        cout << num_arr[i - 1];
         if (i % 3 == 0) {
             cout << endl;
         } else {
             cout << " ";
        }
    }
    return 0;
}
