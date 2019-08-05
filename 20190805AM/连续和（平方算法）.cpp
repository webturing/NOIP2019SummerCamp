#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 20000;
  for (int l = 1; l <= n; l++)
    for (int r = l + 1; r <= n; r++) {
      long long s = 1LL * (l + r) * (r - l + 1) / 2;
      if (s == n) {
        cout << l << " " << r << endl;
      }
    }
  return 0;
}
