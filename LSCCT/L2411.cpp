#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, k;
    cin >> n >> k;
    int p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    int l = p[0], r = p[n];
    
    sort(p, p + n);

    return 0;
}