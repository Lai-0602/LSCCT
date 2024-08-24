#include <bits/stdc++.h>
#define int long long
#define yes no
using namespace std;

bool cmp (pair<int, int> a, pair<int, int> b) {
    return a.first * a.first + a.second * a.second < b.first * b.first + b.second * b.second;
}

int32_t main() {
    int n;
    cin >> n;
    pair <int, int> p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i].first;
        cin >> p[i].second;
    }
    sort(p, p+n, cmp);
    for (int i = 0; i < n; i++) {
        cout << p[i].first << " " << p[i].second << endl;
    }
    return 0;
}