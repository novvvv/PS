#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[101][101];
bool isVisit[101][101];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m, k;
int area_size;

void dfs(int x, int y) {
    isVisit[x][y] = true;
    for (int dir = 0; dir < 4; dir++) {
        int nx = x+ dx[dir];
        int ny = y + dy[dir];
        if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
        if (isVisit[nx][ny] || arr[nx][ny] == 1) continue;
        area_size++;
        dfs(nx, ny);
    }
}
int main(int argc, const char * argv[]) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> m >> n >> k;
    
    while (k--) {
        int x, y, xx, yy;
        cin >> x >> y >> xx >> yy;
        for (int i = y; i < yy; i++) {
            for (int j = x; j < xx; j++) {
                arr[i][j] = 1;
            }
        }
    }
    
    int area_num = 0;
    vector<int> ans;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            area_size = 1;
            if (!isVisit[i][j] && arr[i][j] != 1) {
                // dfs
                dfs(i, j);
                ans.push_back(area_size);
                area_num++;
            }
        }
    }
    
    sort(ans.begin(), ans.end());
    cout << area_num << '\n';
    for (auto elem : ans) {
        cout << elem << " ";
    }
    
    // 직사각형 왼쪽 아래 꼭짓점 x, y
    // 직사각형 오른쪽 위 꼭짓점 x, y
    // 왼쪽 아래 (0,0) 오른쪽위 (n,m)
    
    
    
    return 0;
}
