#include <iostream>
#include <string>
using namespace std; 

int main() {
    
    while(true) {
        string sentence;
        getline(cin, sentence);
        int aeiou = 0;
        if (sentence == "#") break;
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u') {
                aeiou++;
            }
            if (sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U') {
                aeiou++;
            }
        }
        cout << aeiou << '\n';
    }
    
}



