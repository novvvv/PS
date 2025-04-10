#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> ans; 
    deque<int> card;
    for (int i = 0; i < n; i++) {
        card.push_back(i + 1);
    }

    while(true) {

        // Logic1
        ans.push_back(card.front());
        card.pop_front();

        if (card.empty()) break;

        // Logic2) 제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다. 
        int tmp = card.front();
        card.push_back(tmp);
        card.pop_front();

    }

    // condition. 동작을 카드가 한 장 남을 때까지 반복한다. 
    // Logic. 1) 제일 위에 있는 카드를 바닥에 버린다. 

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}


