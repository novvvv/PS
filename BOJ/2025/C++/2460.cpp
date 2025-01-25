#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int max_people = 0;
    int current_people = 0;
    int input_people, output_people;
    for (int i = 0; i < 10; i++) {
        cin >> output_people >> input_people;
        current_people = current_people - output_people + input_people;
        if (max_people < current_people) max_people = current_people;

    }

    cout << max_people << endl;

    return 0;
}

