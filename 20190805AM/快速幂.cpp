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
  cout << pw(3, 1997, 10) << endl;

  return 0;
}
