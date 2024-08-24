#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int l = s.length();
        if (l > 10) {
            cout << s[0] << l - 2 << s[l - 1] << "\n";
        } else {
            cout << s << "\n";
        }
    }
    return 0;
}