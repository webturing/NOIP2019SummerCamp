#include <bits/stdc++.h>

using namespace std;

int lcm(int a, int b) { return a * b / __gcd(a, b); }

int main() {
    int n, a, b;
    for (cin >> n; n-- && cin >> a >> b;
         cout << __gcd(a, b) << " " << lcm(a, b) << endl);
    return 0;
}