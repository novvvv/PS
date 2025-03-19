#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int ans[101][101];
vector<int> adj_list[101];
int isVisit[101];

void dfs(int u) {
    for (int i = 0; i < adj_list[u].size(); i++) {
        if (!isVisit[adj_list[u][i]]) {
            isVisit[adj_list[u][i]] = 1;
            dfs(adj_list[u][i]);
        }
    }
}

int main() {
    
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    int n;
    cin >> n;

    int line;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> line;
            if (line == 1) {
                adj_list[i].push_back(j);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        // i번째 노드와 연결된 모드 노드와의 dfs 탐색 수행
        // 차례로 모든 노드를 방문하며 i번째 노드와 연결된 모든 노드의 값을 1로 출력한다.
        memset(isVisit, 0, sizeof(isVisit));
        dfs(i);
        for (int j = 0; j < n; j++) {
            cout << isVisit[j] << " ";
        }
        cout << '\n';
    }
    
}
