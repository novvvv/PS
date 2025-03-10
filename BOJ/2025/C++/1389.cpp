#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
const int vertex = 5001;
const int INF = 10001000;
int dist[101][101];
int kevin[101];


int main() {
    
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    int n, m; // n (2<=n<=100): 유저 수, m (1<=m<=5000) : 친구 관계 수
    cin >> n >> m;
    
    // Logic1 : 거리 배열 (dist) 값을 모두 무한대 INF 로 초기화.
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dist[i][j] = INF;
        }
    }
    
    // Logic2 : 인접 행렬 방식 사용
    // -> 문제에서 별도의 가중치를 제공하지 않았기에 모두 1로 초기화
    int node1, node2;
    for (int i = 0; i < m; i++) {
        cin >> node1 >> node2;
        dist[node1][node2] = 1;
        dist[node2][node1] = 1;
    }
    
    for (int round = 1; round <= n; round++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                // round를 경유해서 이동하는 경우가 더 빠른 경우 갱신
                dist[i][j] = min(dist[i][j], dist[i][round] + dist[round][j]);
            }
        }
    }
    
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            kevin[k] += dist[k][i]; // k to i 간선 경로
        }
        kevin[k] -= dist[k][k]; // k to k 즉, 자기 자신에서 자신으로 가는 경로는 제외
    }
    
    int min_val = kevin[1];
    int idx = 1;
    for (int i = 2; i <= n; i++) {
        if (kevin[i] < min_val) {
            min_val = kevin[i];
            idx = i;
        }
    }
    
    cout << idx << '\n';
    
}
