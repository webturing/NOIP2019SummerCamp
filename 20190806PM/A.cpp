#include <bits/stdc++.h>
using namespace std;
int f(int n) { return n ? f(n - 1) * n : 1; }
int main() {
  int n;
  cin >> n;
  cout << f(n) << endl;
  return 0;
}