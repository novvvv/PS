#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  cin >> n;
  vector<int> height(n);
  for (int i = 0; i < n; i++) {
    cin >> height[i];
  }
  
  int max_building = 1;
  for (int i = 0; i < n; i++) {
    // 높이 i에 대해 간격 i ~ n까지 bruteForce Search
    for (int j = i + 1; j < n; j++) {
      if (height[i] != height[j]) continue;
      int height_diff = j - i;
      int end_point = j;
      // condition1 : (end_point + height_diff < n) 
      // condition2 : (height[i] == height[end_point + height_diff])
      // - i번쨰 높이와 height_diff (높이차)가 동일한 경우까지 반복
      int cur_max_building = 2;
      while ((end_point + height_diff < n) && (height[i] == height[end_point + height_diff])) {
        end_point += height_diff;
        cur_max_building++;
      }
      max_building = max(max_building, cur_max_building); 
    }
  }
  
  cout << max_building << '\n';
  
}
