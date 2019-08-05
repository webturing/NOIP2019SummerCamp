#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 15;
  int m = 2 * n;
  for (int p = sqrt(m); p >= 1; p--) {
    if (m % p != 0) continue;
    int q = m / p;
    // solve j-i+1==p  j+i==q
    int i = (q - p + 1) / 2;
    int j = (q + p - 1) / 2;
    if (j > i && (i + j) * (j - i + 1) == m) cout << i << " " << j << endl;
  }
  return 0;
}