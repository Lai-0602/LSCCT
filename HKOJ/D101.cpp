#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
	string s;
	cin >> s;
	if (s[0] == '2' || s[0] == '3') {
		cout << "Fixed\n";
	} else {
		cout << "Mobile\n";
	}
	return 0;
}