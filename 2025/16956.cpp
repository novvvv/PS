#include <iostream>
#include <vector>
using namespace std;

const int MAX_ROW = 501;
const int MAX_COL = 501;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
char board[MAX_ROW][MAX_COL];
bool isVisit[MAX_ROW][MAX_COL];
bool flag = true;
int R, C;


void make_block() {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (board[i][j] == 'S') {
                int cur_dir_X = j; // Row
                int cur_dir_Y = i; // column
                for (int dir = 0; dir < 4; dir++) {
                    int nxt_dir_X = cur_dir_X + dx[dir];
                    int nxt_dir_Y = cur_dir_Y + dy[dir];
                    if (nxt_dir_X < 0 || nxt_dir_Y < 0 || nxt_dir_X >= C || nxt_dir_Y >= R) continue;
                    if (board[nxt_dir_Y][nxt_dir_X] == '.') board[nxt_dir_Y][nxt_dir_X] = 'D';
                }
            }
        }
    }
}

void dfs(int y, int x) {
    
    int cur_dir_Y = y;
    int cur_dir_X = x;
    
    if (isVisit[cur_dir_Y][cur_dir_X]) return;
    isVisit[cur_dir_Y][cur_dir_X] = true;
    
    if (board[cur_dir_Y][cur_dir_X] == 'S'){
        flag = false;
        return;
    }
    if (board[cur_dir_Y][cur_dir_X] == 'D') return;
    
    
    for (int dir = 0; dir < 4; dir++) {
        
        int nxt_dir_X = cur_dir_X + dx[dir];
        int nxt_dir_Y = cur_dir_Y + dy[dir];
        
        if (nxt_dir_X < 0 || nxt_dir_Y < 0 || nxt_dir_X >= C || nxt_dir_Y >= R) continue;
        
        dfs(nxt_dir_Y, nxt_dir_X);
        
    }

    
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> R >> C;
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> board[i][j];
        }
    }
    
    make_block();
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (board[i][j] == 'W')
                dfs(i, j);
        }
    }
    
    if (flag) {
        cout << 1 << '\n';
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                cout << board[i][j];
            }
            cout << '\n';
        }
    }
    
    else {
        cout << 0 << '\n';
    }
    
    return 0;
}
