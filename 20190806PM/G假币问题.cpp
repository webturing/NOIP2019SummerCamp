#include <bits/stdc++.h>
using namespace std;
int f(int n) { return n <= 1 ? 0 : f((n + 2) / 3) + 1; }
int main() {
  for (int n; cin >> n && n; cout << f(n) << endl)
    ;

  return 0;
}