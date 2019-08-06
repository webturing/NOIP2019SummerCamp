#include <bits/stdc++.h>

using namespace std;
string D = "123456789";

int main() {
    int n;
    cin >> n;
    string s = D.substr(0, n);
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    return 0;
}