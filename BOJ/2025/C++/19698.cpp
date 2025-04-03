#include <iostream>
#include <deque>
#include <string>
using namespace std; 

int main() {

    int n; // 소들의 수
    int w, h; // 헛간의 크기 
    int l; // 소드레에게 배정되는 공간의 크기
    cin >> n >> w >> h >> l;

    int height_cow = h / l;
    int width_cow = w / l;
    int res_cow = height_cow * width_cow; 

    if (res_cow <= n) {
        cout << res_cow << '\n';
    }
    else {
        cout << n << '\n';
    }
    
}

// n마리의 소가 응모 
// W * H 크기의 직사각형. 소 한 마리당 L * L 크기의 공간을 배정한다. 
// 헛간에는 최대 몇 마리의 소들이 입주할 수 있는가 
