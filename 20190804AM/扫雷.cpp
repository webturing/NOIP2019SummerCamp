#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("input.txt", "r", stdin);
  int n, m, k;
  cin >> n >> m >> k;
  int G[n][m];
  // cerr<<"Size of G="<<sizeof(G)<<endl;
  memset(G[0], 0, sizeof(G));
  while (k--) {
    int x, y;
    cin >> x >> y;
    G[x][y] = 9;
  }

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) {
      if (G[i][j] == 9) continue;
      int s = 0;
      for (int dx = -1; dx <= 1; dx++)
        for (int dy = -1; dy <= 1; dy++) {
          if (dx == 0 && dy == 0) continue;
          int nx = dx + i;
          int ny = dy + j;
          if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
          if (G[nx][ny] == 9) ++s;
        }
      G[i][j] = s;
    }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cerr << G[i][j];
    }
    cerr << endl;
  }
  return 0;
}
