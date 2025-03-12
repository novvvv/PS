#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
const int INF = 10001000;
int dist[101][101];

int main() {
    
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    int n, m; // (2<=n<=100),(1<=m<=100,000)
    cin >> n >> m;
    
    // 시작도시 a, 도착도시 b, 비용 c
    // Logic1 : 거리 배열 (dist) 값을 모두 무한대 INF 로 초기화
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dist[i][j] = INF;
            if (i == j) dist[i][j] = 0;
        }
    }

    int city1, city2, cost;
    for (int i = 0; i < m; i++) {
        cin >> city1 >> city2 >> cost;
        if (dist[city1][city2] != INF) {
            if (dist[city1][city2] < cost)
                continue;
        }
        dist[city1][city2] = cost;
    }
    
    
    // logic2 : Floyd-Warshall
    for (int round = 1; round <= n; round++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == j) continue;
                dist[i][j] = min(dist[i][j], dist[i][round] + dist[round][j]);
            }
        }
    }
    
    // logic3 : output
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (dist[i][j] == INF) cout << 0 << " ";
            else cout << dist[i][j] << " ";
        }
        cout << '\n';
    }
    
}
