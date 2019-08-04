#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 5;
  int G[n][n];
  memset(G, 0, sizeof(G));
  int x = n - 1, y = n / 2;
  for (int i = 1; i <= n * n; i++) {
    G[x][y] = i;
    int nx = (x + 1) % n, ny = (y + 1) % n;
    if (G[nx][ny] != 0) {
      nx = (x + n - 1) % n;
      ny = y;
    }
    x = nx;
    y = ny;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << G[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}