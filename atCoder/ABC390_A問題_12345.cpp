#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> numbers(5);
    for (int i = 0; i < 5; i++)
        cin >> numbers[i];

    for (int i = 0; i < 5; i++) {

        int temp = numbers[i];
        numbers[i] = numbers[i+1];
        numbers[i+1] = temp;

        // 오름차순 판별
        int flag = true;
        for (int j = 0; j < 5; j++) {
            if (numbers[j] != j + 1) {
                flag = false;
            }
        }

        if (flag) {
            cout << "Yes" << '\n';
            return 0;
        }

        temp = numbers[i];
        numbers[i] = numbers[i+1];
        numbers[i+1] = temp;

    }

    cout << "No" << '\n';
    return 0;

}
