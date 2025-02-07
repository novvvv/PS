#include <iostream>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int n, safe_area, max_safe_area = 0;
int arr[101][101];
bool is_visit[101][101];

void dfs(int x, int y, int height) {
  is_visit[x][y] = true;
  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue; // exception
    if (!is_visit[nx][ny] && arr[nx][ny] > height) dfs(nx, ny, height);
  }
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  // 0 ~ 100 bruteForce & DFS
  for (int height = 0; height <= 100; height++) {
    int safe_area = 0;
    fill(&is_visit[0][0], &is_visit[0][0] + 101 * 101, false);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (arr[i][j] > height && !is_visit[i][j]) {
          dfs(i, j, height);
          safe_area++;
        }
      }
    }
    max_safe_area = max(max_safe_area, safe_area);
  }

  cout << max_safe_area<< endl;

}
