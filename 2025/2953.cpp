/*
 * BOJ 2953
 * ID : nov2pro
 * Date : 2025.05.06
 */

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    
    cin.tie(0);
    
    vector<int> p[5];
    
    int max_score = -1;
    int max_participant_index = -1;
    for (int i = 0; i < 5; i++) {
        
        int score;
        for (int j = 0; j < 4; j++) {
            cin >> score;
            p[i].push_back(score);
        }
        
        int sum = accumulate(p[i].begin(), p[i].end(), 0);
        if (max_score < sum) {
            max_score = sum;
            max_participant_index = i + 1;
        }
        
    }
    
    cout << max_participant_index << " " << max_score;
    
    
}
