#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool visited[200001];
int ans[200001];
vector<int> adj_list[200001];
int cnt = 0;

void dfs(int r) {
    
    if (visited[r]) return;
    visited[r] = true;
    cnt++;
    ans[r] = cnt;
    for (int i = 0; i < adj_list[r].size(); i++) {
        dfs(adj_list[r][i]);
    }
}

int main() {
    
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n, m, r; // 정점 수 , 간선 수, 시작 정점
    cin >> n >> m >> r;

    int node1, node2;
    
    for (int i = 1; i <= m; i ++) {
        cin >> node1 >> node2;
        adj_list[node1].push_back(node2);
        adj_list[node2].push_back(node1);
    }
    
    // 탐색 순서를 sort
    for (int i = 1; i <= n; i++) {
        sort(adj_list[i].begin(), adj_list[i].end());
    }
    
    dfs(r);
    
    for (int i = 1; i <= n; i++) cout << ans[i] << '\n';
    
}

// N개 정점 (5 <= N <= 100,000) , M개 간선 (1 <= M <= 200,000)
// 정점 R에서 시작해 깊이 우선 탐색으로 노드를 방문한다.
// 노드의 방문 순서를 출력하시오.

// 간선 정보 U v
// 정점 u 정점 v 가중치 1 양방향 간선
