#include <iostream>
#include <vector>
using namespace std;

int board[51][51];
bool isVisit[51][51];
int test_case, m, n, k;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs (int y, int x) {
    isVisit[y][x] = true;
    for (int i = 0 ; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (nx < 0 || ny < 0 || ny >= n || nx >= m) continue;
        if (board[ny][nx] == 0) continue;
        if (isVisit[ny][nx]) continue;
        dfs (ny, nx);
    }
}
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> test_case;

    for (int tc = 0; tc < test_case; tc++) {
        cin >> m >> n >> k;
        fill(&board[0][0], &board[0][0] + 51 * 51, 0);
        fill(&isVisit[0][0], &isVisit[0][0] + 51 * 51, false);

        int x, y;
        for (int i = 0; i < k; i++) {
            cin >> x >> y;
            board[y][x] = 1;
        }

        int worm = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // 방문 x, 배추가 있는 곳
                if (board[i][j] == 1 && !isVisit[i][j]) {
                    dfs(i, j);
                    worm++;
                }
            }
        }

        cout << worm << '\n';
    }


    return 0;
}

