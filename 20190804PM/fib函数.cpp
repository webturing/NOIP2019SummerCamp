#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL f(LL n) {
  if (n <= 1)
    return 1;
  else
    return f(n - 1) + f(n - 2);
}
int main() { cout << f(46) << endl; }
