#include <iostream>
using namespace std;
int main(void){
    for (int i = 1; i <=10; i++) {
        if (i == 10) {
            cout << i << '\n';
            break;
        }
        cout << i << " ";
    }
    return 0;
}
