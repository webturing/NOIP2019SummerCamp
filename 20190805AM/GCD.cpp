#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main() {
  cout << __gcd(8, 6) << endl;
  return 0;
}
