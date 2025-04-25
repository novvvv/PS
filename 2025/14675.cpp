#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj_list;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n; // 2 <= n <= 100,000 (정점 개수)
    adj_list.resize(n + 1);
    
    for (int i = 0; i < n - 1; i++) {
        
        int node1, node2;
        cin >> node1 >> node2;
        adj_list[node1].push_back(node2);
        adj_list[node2].push_back(node1);
        
    }
    
    int query;
    cin >> query;
    for (int i = 0; i < query; i++) {
        int t, node;
        cin >> t >> node;
        // k번째 정점이 단절점인가?
        if (t == 1) {
            if (adj_list[node].size() > 1) {
                cout << "yes\n";
            }
            else {
                cout << "no\n";
            }
        }
        // k번째 간선이 단절선인가?
        else {
            cout << "yes\n";
        }
    }
    
    return 0;
}



// 간선 정보 a, b
// a정점과 b정점이 연결되어있음.

// 질의 개수 q
// 질의 t(1<=t<=2)
// t = 1인 경우 k번째 정점이 단절점인가? (1 <= k <= n)
// t = 2인 경우 k번째 간선이 단절선인가? (1 <= k <= n-1)
