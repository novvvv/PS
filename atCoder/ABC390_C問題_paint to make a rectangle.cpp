#include <iostream>
using namespace std;

int main() {

    int H, W; // 1 <= H,W <= 1000
    cin >> H >> W;
    char board[1001][1001]; // # : black, . : white, ? : none
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> board[i][j];
        }
    }

    int min_height = H;
    int max_height = -1;
    int min_width = W;
    int max_width = -1;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (board[i][j] == '#') {
                min_height = min(min_height, i);
                max_height = max(max_height, i);
                min_width = min(min_width, j);
                max_width = max(max_width, j);
            }
        }
    }

    bool isRectangle = true;
    for (int i = min_height; i <= max_height; i++) {
        for (int j = min_width; j <= max_width; j++) {
            if (board[i][j] == '.') isRectangle = false;
        }
    }

    if (isRectangle) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}

// ?
