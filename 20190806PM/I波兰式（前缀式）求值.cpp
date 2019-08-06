#include <bits/stdc++.h>

using namespace std;

double foo() {
    string str;
    cin >> str;
    double val;
    istringstream iss(str);
    if (iss >> val) return val;
    double a = foo();
    double b = foo();
    switch (str[0]) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
    }
    return 0;
}

int main() {
    cout << fixed << setprecision(2) << foo() << endl;
    return 0;
}