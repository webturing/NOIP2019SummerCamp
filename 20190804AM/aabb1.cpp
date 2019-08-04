#include <bits/stdc++.h>
using namespace std;
int main() {
  for (int n = 1000; n <= 9999; n++) {
    int left = n / 100;
    int right = n % 100;
    if (left % 11 == 0 && right % 11 == 0) {
      int sq = sqrt(n);
      if (sq * sq == n) cout << n << endl;
    }
  }
  return 0;
}
