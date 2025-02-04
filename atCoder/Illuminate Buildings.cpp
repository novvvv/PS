#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> building(n);
  for (int i = 0; i < n; i++) {
    cin >> building[i];
  }

  int max_building_cnt = 1;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (building[i] != building[j]) continue;
      int diff = j - i; // 빌딩 간격
      int end_ptr = j;
      int cur_building_cnt = 2;
      while ((end_ptr + diff < n) && (building[i] == building[end_ptr + diff])) {
        cur_building_cnt++;
        end_ptr += diff;
      }
      max_building_cnt = max(max_building_cnt, cur_building_cnt);
    }
  }
  cout << max_building_cnt << '\n';

}
