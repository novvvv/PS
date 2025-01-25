#include <iostream>
#include <cstring>
using namespace std;

int test_case, width, height, cabbage;
int board[51][51];
bool isVisit[51][51];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {

    isVisit[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || ny < 0 || nx >= height || ny >= width) continue;
        if (board[nx][ny] == 0|| isVisit[nx][ny]) continue;
        dfs(nx, ny);
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> test_case;
    int x, y;
    for (int tc = 0; tc < test_case; tc++) {

        memset(board, 0, sizeof(board));
        memset(isVisit, false, sizeof(isVisit));

        cin >> width >> height >> cabbage; // 가로, 세로, 배추 위치
        for (int i = 0; i < cabbage; i++) {
            cin >> x >> y;
            board[y][x] = 1;
        }

        int worm_cnt = 0;
        for (int row = 0; row < height; row++) {
            for (int col = 0; col < width; col++) {
                // 양배추가 심어져있고, 방문하지 않은 좌표인 경우 dfs 탐색.
                if (board[row][col] == 1 && !isVisit[row][col]) {
                    dfs(row, col);
                    worm_cnt++;
                }
            }
        }

        cout << worm_cnt << endl;
    }



    return 0;
}

