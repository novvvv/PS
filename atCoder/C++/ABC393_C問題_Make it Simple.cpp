#include <iostream>
#include <map>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M;
  cin >> N >> M;
  int ans = 0;
  map<pair<int, int>, int> m;
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    if (u == v) {
      ans++;
      continue;
    }
      // 정점의 순서를 정리
      // (U,v)를 작은정점, 큰정점으로 정렬한다.
    if (u > v) swap(u, v);
    m[{u, v}]++;
  }
    
    // M에 저장된 간선의 개수를 확인
  for (auto& [edge, k] : m) ans += k - 1;
  cout << ans << "\n";
}
