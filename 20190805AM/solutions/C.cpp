#include <bits/stdc++.h>
using namespace std;
inline bool prime(int n) {  // o(sqrt(n))
  if (n == 2) return true;
  if (n == 1 or n == 0 or n % 2 == 0) return false;
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) return false;
  }
  return true;
}
int main() {
  int l, r;
  cin >> l >> r;
  int tot = 0;
  for (int n = l; n <= r; n++)
    if (prime(n)) ++tot;
  cout << tot << endl;
  return 0;
}
