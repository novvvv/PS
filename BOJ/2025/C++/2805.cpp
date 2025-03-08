#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[1000001];

int main() {
    
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    long long n, m; // 나무 수 n, 집에 가져갈 나무의 길이 m
    cin >> n >> m; // 4, 7 최소 7m
    
    vector<long long> tree;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        tree.push_back(arr[i]);
    }
    
    // st(0) ~ ed(Tree 내부 최대 높이) 사이에서 탐색
    long long st = 0;
    long long ed = *max_element(tree.begin(), tree.end());
    long long res = 0;
    
    while (st <= ed) {
        long long cur_tree_total = 0;
        long long mid = (st + ed) / 2;
        for (int i = 0; i < n; i++) {
            if (tree[i] > mid) cur_tree_total += tree[i] - mid;
        }
        
        if (cur_tree_total < m) {
            ed = mid - 1;
        }
        else {
            res = mid;
            st = mid + 1;
        }
    }
    cout << res << '\n';
}

// 선형탐색 -> 시간초과
// 20 15 10 17 ... 합이 7 어떻게 이분탐색으로 풀이하지.
// min 1 max 20
// logn * n
