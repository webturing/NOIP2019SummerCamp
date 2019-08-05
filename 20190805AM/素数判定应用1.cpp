#include <bits/stdc++.h>
using namespace std;
const int N = 10000000;
bool prime[N + 1];
void init() {
  for (int i = 0; i <= N; i++) prime[i] = true;  //
  prime[0] = prime[1] = false;
  for (int i = 2; i * i <= N; i++) {
    if (prime[i] == false) continue;
    for (int j = 2 * i; j <= N; j += i) {
      prime[j] = false;
    }
  }
}
int main() {
  long long start = clock();

  init();
  int tot = 0;
  for (int i = 1; i <= N; i++)
    if (prime[i]) {
      ++tot;
    }
  cout << tot << endl;

  long long end = clock();
  cout << (end - start) << endl;
  return 0;
}
