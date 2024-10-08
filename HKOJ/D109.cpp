#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n;
    cin >> n;
    while (n != 0) {
        if (n >= 1000) {
            cout << 1000 << "\n";
            n -= 1000;
        } else if (n >= 500) {
            cout << 500 << "\n";
            n -= 500;
        } else if (n >= 100) {
            cout << 100 << "\n";
            n -= 100;
        } else if (n >= 50) {
            cout << 50 << "\n";
            n -= 50;
        } else if (n >= 20) {
            cout << 20 << "\n";
            n-= 20;
        } else {
            cout << 10 << "\n";
            n -= 10;
        }
    }
    return 0;
}