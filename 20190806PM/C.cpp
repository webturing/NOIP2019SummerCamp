#include <bits/stdc++.h>

using namespace std;

int f(int n) { return n < 10 ? n : f(n / 10) + n % 10; }

int main() {
    for (int n; cin >> n; cout << f(n) << endl);
    return 0;
}
// Tom数