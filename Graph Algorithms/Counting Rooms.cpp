#include <bits/stdc++.h>
 
using namespace std;
 
int n, m;
char a[1001][1001];
bool visit[1001][1001];
int cnt = 0;
 
int x[4] = {-1, 1, 0, 0};
int y[4] = {0, 0, 1, -1};
 
void dfs(int i, int j)
{
    visit[i][j] = true;
    for (int k = 0; k < 4; ++k) {
        int iv = i + x[k];
        int jv = j + y[k];
        if (iv < n && jv < m && iv >= 0 && jv >= 0) {
            if (a[iv][jv] == '.' && !visit[iv][jv]) {
                dfs(iv, jv);
            }
        }
    }
}
 
void solve()
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == '.' && !visit[i][j]) {
                dfs(i, j);
                ++cnt;
            }
        }
    }
}
 
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            visit[i][j] = false;
        }
    }
    solve();
 
    cout << cnt;
 
    return 0;
}