#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    double a, b, C;
    cin >> a >> b >> C;
    C = C * acos(-1) / 180.0;
    double n = 0.5 * a * b * sin(C);
    cout << fixed << setprecision(3) << n << "\n";
    return 0;
}