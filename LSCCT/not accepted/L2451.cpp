#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    int t;
    for (int i = 0; i < t; i++) {
        bool d; // 0 = keep spaces, 1 = ignore spaces
        int k; // number of occurrence of a character needs to be removed
        cin >> d >> k;
        map<char, int> m;
        bool done = 0;
        while (done == 0) {
            char temp;
            cin >> temp;
            getline()
            if (temp == ' ') {
                if (d == 0) {
                    cout << " ";
                } else if (d == 1) {
                    cout << "";
                }
            } else if (temp == '#') {
                cout << "\n";
                done = 1;
            } else {
                m[temp]++;
                if (m[temp] % k == 0) {
                    cout << "";
                } else if (m[temp] % k != 0) {
                    cout << temp;
                }
            }
        }
    }
    return 0;
}