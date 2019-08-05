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
inline int rev(int n) {
  int m = 0;
  for (; n; n /= 10) m = m * 10 + (n % 10);
  return m;
}
inline bool sys(int n) { return n == rev(n); }
int main() {
  int l, r;
  cin >> l >> r;
  for (int n = l; n <= r; n++)
    if (sys(n) and prime(n)) cout << n << endl;
  return 0;
}
