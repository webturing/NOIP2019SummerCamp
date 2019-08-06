#include<bits/stdc++.h>

using namespace std;

int f(int n) {
    return n <= 1 ? 0 : f((n + 2) / 3) + 1;
}

int main() {
    for (int n; cin >> n && n; cout << f(n) << endl);

    return 0;
}
/**************************************************************
    Problem: 1078
    User: acm
    Language: C++
    Result: 正确
    Time:21 ms
    Memory:2016 kb
****************************************************************/