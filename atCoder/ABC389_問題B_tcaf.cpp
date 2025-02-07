#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;
  long long ptr = 1;
  long long st = 1;
  while (ptr != n) {
    ptr *= st;
    st++;
  }
  cout << st - 1<< '\n';
}
