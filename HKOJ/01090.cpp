#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	map<int, bool> m; // 0 -> in, 1 -> out
	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;
		if (m[s] == 0) {
			cout << "in\n";
			m[s] = 1;
		} else {
			cout << "out\n";
			m[s] = 0;
		}
	}
	return 0;
}