#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    char e1, e2;
    int n1, n2;
    cin >> e1 >> n1 >> e2 >> n2;
    int echange = abs(e2 - e1);
    int nchange = abs(n2 - n1);
    cout << max(echange, nchange) << endl;
    return 0;
}