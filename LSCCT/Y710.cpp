#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, m, c;
    cin >> n >> m >> c;
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    // int al = 0, bl = 0, ar = n - 1, br = m - 1, cnt;
    // while (al <= n) {
    //     while (bl <= br) {
    //         if (a[al] + b[bl] == c) {
    //             cnt++;
    //         }
    //         bl++;
    //     }
    //     al++;
    // }

    int x = c, cnt = 0, pta = 0, ptb = m - 1;
    while(pta < n && ptb >= 0) {
        if(a[pta] + b[ptb] == x) {
            // cout << a[pta] << ‘ ’ << b[ptb] << endl;
            cnt++;
        }
        if(a[pta] + b[ptb] < x) pta++; // Increase sum
        else ptb--; // Decrease sum
    }

    cout << cnt << "\n";
    return 0;
}