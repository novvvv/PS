#include <iostream>
#include <deque>
#include <utility>
using namespace std;

int board[101][101];
bool isVisit[101][101];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1,0, -1};
int n;

void dfs(int x, int y, int depth) {
    isVisit[x][y] = true;
    for (int dir = 0; dir < 4; dir++) {
        int nx =  x + dx[dir];
        int ny = y + dy[dir];
        if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
        if (isVisit[nx][ny] || board[nx][ny] <= depth ) continue;
        dfs(nx, ny, depth);
    }
}

int main(int argc, const char * argv[]) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    
    int res = 0;
    for (int depth = 0; depth <= 100; depth++) {
        int area = 0;
        fill(&isVisit[0][0], &isVisit[0][0] + 101 * 101, false);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((board[i][j] > depth) && !isVisit[i][j]) {
                    dfs(i, j, depth);
                    area++;
                }
            }
        }
        res = max(res, area);
    }

    cout << res << endl;
    
    return 0;
}
