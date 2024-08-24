#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	stack<int> st;
	for (int i = 0; i < n; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "PUSH") {
			int p;
			cin >> p;
			st.push(p);
		} else if (cmd == "TOP") {
			if (st.empty()) {
				cout << "Empty" << endl;
			} else {
				cout << st.top() << endl;
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