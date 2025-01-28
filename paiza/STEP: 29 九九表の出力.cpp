#include <iostream>
using namespace std;
int main(void){
    for (int i = 1; i <= 9; i++) {
        
        for (int j = 1; j <= 9; j++) {
            if (j == 9) {
                cout << i * j; 
                continue;
            }
            cout << i * j << " ";
        }
        
        cout << '\n';
    
    }
    return 0;
}
