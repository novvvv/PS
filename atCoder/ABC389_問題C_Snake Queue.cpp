#include <iostream>
#include <deque>
#include <utility>
using namespace std;

int main(int argc, const char * argv[]) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    
    deque<pair<long long, long long>> snake_queue;
    long long offset = 0; // 좌표 보정값
    long long last_head_ptr = 0; // 마지막 뱀의 머리 위치
    
    for (int i = 0; i < n; i++) {
        int command;
        cin >> command;
        // command 1 : l의 길이를 가지는 뱀을 뒤에 추가
        if (command == 1) {
            long long l;
            cin >> l;
            snake_queue.push_back({l, last_head_ptr});
            last_head_ptr += l;
        }
        // command 2 : 최상단에 있는 뱀을 제거
        else if (command == 2) {
            
            long long m = snake_queue.front().first;
            snake_queue.pop_front();
            offset += m; // 보정값, 제거할 뱀의 길이
        }
        // command 3 : 앞에서부터 k번째에 있는 뱀의 머리 좌표를 출력
        else {
            int k;
            cin >> k;
            cout << snake_queue[k-1].second - offset << '\n';
        }
        
    }
    
    return 0;
}
