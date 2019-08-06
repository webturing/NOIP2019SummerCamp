#include <bits/stdc++.h>
using namespace std;
using LL = long long;
LL cnr(int n, int r) {
  if (r > n / 2) r = n - r;
  LL p = 1;
  for (int i = 0; i < r; i++) p *= n - i;
  for (int i = r; i >= 2; i--) p /= i;
  return p;
}
int main() {
  for (int n, r; cin >> n >> r; cout << cnr(n, r) << endl)
    ;
  return 0;
}