#include <bits/stdc++.h>
using namespace std;
int pw(int a, int n, int m) {  // a^n%M
  if (n == 0) return 1;
  if (a == 1 || n == 1) return a;
  if (n % 2 == 0) {
    return pw(a * a % m, n / 2, m);
  }
  return (pw(a * a % m, n / 2, m) * a) % m;
}

int main() {
  int n;
  cin >> n;
  int two = 0, five = 0, s = 1;
  for (int i = 2; i <= n; i++) {
    int j = i;
    for (; j % 2 == 0; j /= 2) ++two;
    for (; j % 5 == 0; j /= 5) ++five;
    s = (s * j % 10) % 10;
  }
  cout << (s * pw(2, two - five, 10)) % 10 << endl;
  return 0;
}
