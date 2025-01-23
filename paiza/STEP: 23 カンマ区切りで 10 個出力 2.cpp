#include <iostream>
using namespace std;
int main(void){
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++) {
        if (i == 9) {
            cout << arr[i];
            break;
        }
        cout << arr[i] << ",";
    }
    return 0;
}
