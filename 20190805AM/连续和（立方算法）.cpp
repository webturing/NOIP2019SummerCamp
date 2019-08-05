#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 200000;
  for (int l = 1; l <= n; l++)
    for (int r = l + 1; r <= n; r++) {
      int s = 0;
      for (int k = l; k <= r; k++) {
        s += k;
      }
      if (s == n) {
        cout << l << " " << r << endl;
      }
    }
  return 0;
}
