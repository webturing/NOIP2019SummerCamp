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
vector<int> primes = {2, 3, 5, 7};
int main() {
  for (int n; cin >> n;) {
    for (int k = primes.back() + 2; primes.size() < n; k += 2)
      if (prime(k)) primes.emplace_back(k);
    cout << primes[n - 1] << endl;
  }

  return 0;
}
