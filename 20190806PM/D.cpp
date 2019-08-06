#include <bits/stdc++.h>

using namespace std;
using LL = long long;

LL bin(LL x, LL n, LL MOD) {
    LL ret = MOD != 1;
    for (x %= MOD; n; n >>= 1, x = x * x % MOD)
        if (n & 1) ret = ret * x % MOD;
    return ret;
}

int main() {
    for (int a, p, m; cin >> a >> p >> m and a + p + m;
         cout << bin(a, p, m) << endl);
    return 0;
}
//快速幂的非递归版本