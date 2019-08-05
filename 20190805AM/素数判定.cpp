#include <bits/stdc++.h>
using namespace std;
inline bool prime(int n) {  // o(sqrt(n))
  if (n == 2) return true;
  if (n == 1 || n == 0 || n % 2 == 0) return false;
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) return false;
  }
  return true;
}
int main() {
  cout << prime(1000000007) << endl;

  return 0;
}
