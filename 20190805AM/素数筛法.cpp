#include <bits/stdc++.h>
using namespace std;
const int N = 100;
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
  init();
  for (int i = 1; i <= N; i++)
    if (prime[i]) {
      cout << i << " ";
    }
  cout << endl;
  return 0;
}
