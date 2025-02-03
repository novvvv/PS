#include <iostream>
using namespace std;
const int MAX = 101;

int main(void){
    
    int n;
    cin >> n;
    int arr[101];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        int max_int = arr[i];
        for (int j = 0; j < max_int; j++) {
            if (j == max_int - 1) {
                cout << j + 1;
                break;
            }
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}
