#include <iostream>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m;
int friend_cnt = 0;
char campus[601][601];
bool isVisit[601][601];

void dfs(int x,int y) {
    isVisit[x][y] = true; 
    if (campus[x][y] == 'P') friend_cnt++;
    for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; 
        if (isVisit[nx][ny]) continue;
        if (campus[nx][ny] == 'X') continue;
        dfs(nx, ny);
    }
}

int main () {

    cin >> n >> m;
    int i_idx, j_idx;
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cin >> campus[i][j];
            if (campus[i][j] == 'I') {
                i_idx = i;
                j_idx = j;
            }
        }
    }

    dfs(i_idx, j_idx);
    
    if (friend_cnt == 0) {
        cout << "TT" << '\n';
    }
    else {
        cout << friend_cnt << '\n';
    }

}
