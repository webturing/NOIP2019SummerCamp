#include <bits/stdc++.h>
using namespace std;
inline bool prime(int n) {
  if (n == 2) return true;
  if (n <= 1 || n % 2 == 0) return false;
  int m = sqrt(n);
  for (int i = 3; i <= m; i += 2) {
    if (n % i == 0) return false;
  }
  return true;
}
int main() {
  int a, b;
  cin >> a >> b;
  int tot = 0;
  if (a <= 2 and 2 <= b) ++tot;
  if (a % 2 == 0) ++a;

  for (int n = a; n <= b; n += 2) {
    if (prime(n)) ++tot;
  }
  cout << tot << endl;
  return 0;
}
