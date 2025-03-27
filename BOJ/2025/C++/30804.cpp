#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

vector<int> arr;

int main() {
    
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    
    // ** Two Pointer **
    // 과일 2가지가 포함된 과일의 최대값을 구한다?
    // 과일의 종류가 2개를 초과하면 left Pointer를 하나씩 줄인다.
    vector<int> v(n, 0); // 탕후루 배열
    vector<int> fruits(10, 0); // 과일의 개수
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int l_ptr = 0, r_ptr = 0;
    int result = 0;
    
    while(r_ptr < n) {
        fruits[v[r_ptr++]]++;
        
        // 과일의 종류가 2개를 초과하는 케이스
        // * count(fruits.begin(), fruits.end(), 0) -> 과일 탕후루 내부에서 원소의 개수가 0인 과일의 개수
        // * while (10 - count(fruits.begin(), fruits.end(), 0) > 2) -> 과일의 종류
        // * 즉, 과일의 종류가 2개를 초과하는 경우에는 l_ptr을 증가시킨다.
        
        while (10 - count(fruits.begin(), fruits.end(), 0) > 2) {
            fruits[v[l_ptr++]]--;
        }
        result = max(result, r_ptr - l_ptr);
    }
    
    cout << result << '\n';
    
    
}
