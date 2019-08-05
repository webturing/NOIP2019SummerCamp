#include <bits/stdc++.h>
using namespace std;
inline int rev(int n) {
  int m = 0;
  while (n > 0) {
    m = m * 10 + (n % 10);
    n /= 10;
  }
  return m;
}
int main() {
  cout << rev(12345) << endl;

  return 0;
}
