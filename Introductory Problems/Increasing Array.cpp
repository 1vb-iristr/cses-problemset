#include <bits/stdc++.h>

using namespace std;
#define maxN 300001

int main() {
    long long n, a[maxN];
    cin >> n;
    long long cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i < n; ++i) {
        while (a[i] < a[i - 1]) { 
            ++cnt;
            ++a[i];
        }
    }
    cout << cnt;
    return 0;
}