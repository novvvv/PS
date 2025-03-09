#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
const int vertex = 5001;
bool isVisit[vertex];
vector<int> adj[vertex];

int cur_length, min_length;

/* void dfs(int cur, int target) {
    
    cout << "* dfs logic start : " << cur << " - " << target << endl;
    isVisit[cur] = true;
    cur_length++;
    for (int node : adj[cur]) {
        if (node == target) {
            cur_length = min(cur_length, min_length);
        }
        if (isVisit[node] == false) {
            dfs(node, target);
        }
    }
    
} */

void dfs(int cur, int target) {
    
    cout << "* dfs logic start : " << cur << " - " << target << endl;
    isVisit[cur] = true;
    cur_length++;

    for (int node : adj[cur]) {
        if (node == target) {
            min_length = min(cur_length, min_length);
            continue; // return 제거, 다른 경로도 탐색하게끔 유지
        }
        if (!isVisit[node]) {
            dfs(node, target);
        }
    }

    cur_length--;     // 🔹 백트래킹 (재귀 호출 후 거리 되돌리기)
    isVisit[cur] = false; // 🔹 방문 표시 해제 (다른 경로 탐색 가능하게)
}

int main() {
    
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    int n, m; // n (2<=n<=100): 유저 수, m (1<=m<=5000) : 친구 관계 수
    cin >> n >> m;
    
    int node1, node2;
    for (int i = 0; i < m; i++) {
        cin >> node1 >> node2;
        adj[node1].push_back(node2);
        adj[node2].push_back(node1);
    }
    
    for (int from = 1; from <= n; from++) {
        
        for (int to = 1; to <= n; to++) {
            
            cout << " *** Dfs Logic node[" << from << "]" << " to " << "[" << to<< "]" << "***" << endl;
            
            fill(isVisit, isVisit + 5001, false);
            cur_length = 0;
            min_length = 0;
            if (from == to) continue;
            
            dfs(from, to);
            // cout << from << " to " << to << cur_length << endl;
            
        }
    }
    
    // graph?
    // (1, 3)
    
    // Cavin Baker 6,Ruels
    // 케빈 베이컨 게임을 진행했을때 "케빈 베이컨의 수가 가장 적은 사람"을 찾는다.
    // BOJ 유저가 5명. (1,3) (1,4) (2,3) (3,4) (4,5)는 친구
    // 1 to 2 = (1,3) + (3,2) 2
    // 1 to 3 = (1,3) 1
    // 1 to 4 = (1,4) 1
    // 1 to 5 = (1,4) (4,5) 2
    
    // dfs?
    
    // BOJ 유저와 친구 관계가 입력으로 주어질때, 케빈베이컨의 수가 가장 작은 사람은 ??
    
}
