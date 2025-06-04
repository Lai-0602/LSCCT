#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n, m, a;
    cin >> n >> m >> a;
    cout << (ceil(n / a) * ceil(m / a)) << "\n";
    return 0;
}