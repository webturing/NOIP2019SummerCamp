#include <bits/stdc++.h>
using namespace std;
int f(int m, int n) {
  if (m <= 1 || n <= 1) return 1;
  if (n > m) return f(m, m);
  return f(m, n - 1) + f(m - n, n);
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    int m, n;
    cin >> m >> n;
    cout << f(m, n) << endl;
  }
  return 0;
}

//设f(m,n)为m个苹果，n个盘子的放法数目，则先对n作讨论，
//　　　*
//当n>m：必定有n-m个盘子永远空着，去掉它们对摆放苹果方法数目不产生影响。即if(n>m)f(m,n)=f(m,m)
//　　　* 当n<=m：不同的放法可以分成两类：
//　　　　(a)有至少一个盘子空着，即相当于f(m,n)=f(m,n-1);
//　　　　(b)所有盘子都有苹果，相当于可以从每个盘子中拿掉一个苹果，不影响不同放法的数目，
//即f(m,n)=f(m-n,n).而总的放苹果的放法数目等于两者的和，即f(m,n)=f(m,n-1)+f(m-n,n)
