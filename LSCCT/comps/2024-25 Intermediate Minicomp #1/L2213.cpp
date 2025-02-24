#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n;
    cin >> n;
    int x[n - 1], y[n - 1], area = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    area += x[0] * y[0];
    for (int i = 1; i <= n; i++) {
        area += (x[i] < x[i - 1] ? (x[i - 1] - x[i]) : (x[i] - x[i - 1])) * (y[i] < y[i - 1] ? (y[i - 1] - x[i]) : (y[i] - y[i - 1]));
    }
    return 0;
}