#include <bits/stdc++.h>
#defien int long long
using namespace std;
signed main() {
    int n, v;
    cin >> n >> v;
    int a[n][2];

    1 2
    // 2 4
    // 3 4
    // 4 5

    // i,0 i,1
    // i,0 i,1
    // i,0 i,1
    // i,0 i,1

    // n = 4, v = 5

    // 1  2
    // 2
    // 3
    // 4

    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i][0] << a[i][1] << "\n";
    }
    return 0;
}