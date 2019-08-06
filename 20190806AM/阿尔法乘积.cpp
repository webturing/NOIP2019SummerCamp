#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

LL f(LL x) {
    if (x < 10)return x;
    LL s = 1;
    while (x > 0) {
        int d = x % 10;
        if (d != 0)s = s * d;
        x /= 10;
    }
    return f(s);

}

int main() {
    int a;
    cin >> a;
    cout << f(a) << endl;
    return 0;
}