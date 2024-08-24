#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	queue<int> st;
	for (int i = 0; i < n; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "PUSH") {
			int p;
			cin >> p;
			st.push(p);
		} else if (cmd == "FRONT") {
			if (st.empty()) {
				cout << "Empty" << '\n';
			} else {
				cout << st.front() << endl;
			}
		} else if (cmd == "POP") {
			if (st.empty()) {
				cout << "Cannot pop" << endl;
			} else {
				st.pop();
			}
		} else {
			cout << st.size() << endl;
		}
	}
	return 0;
}