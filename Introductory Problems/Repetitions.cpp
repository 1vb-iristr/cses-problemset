#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 1; int mx = 1;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) { 
            cnt += 1;
            mx = max(cnt, mx);
        }
        else cnt = 1;
    }
    cout << mx;
    return 0;
}