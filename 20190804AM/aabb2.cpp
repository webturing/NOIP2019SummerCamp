#include <bits/stdc++.h>
using namespace std;
int main() {
  for (int a = 1; a <= 9; a++)
    for (int b = 0; b <= 9; b++) {
      int n = 1100 * a + 11 * b;
      int sq = sqrt(n);
      if (sq * sq == n) cout << n << endl;
    }
  return 0;
}
