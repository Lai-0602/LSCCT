#include <bits/stdc++.h>
using namespace std;
int main() {
	stack<char> st;
	string f;
	getline(cin, f);
	for (int i = 0; i < f.length(); i++) {
		if (f[i] == '(' || f[i] == '[' || f[i] == '{') {
			st.push(f[i]);
		} else if (f[i] == ')' || f[i] == ']' || f[i] == '}') {
			if (st.empty()) {
				cout << "No" << endl;
				return 0;
			}
			if ((st.top() == '(' && f[i] == ')')|| (st.top() == '[' && f[i] == ']') || (st.top() == '{' && f[i] == '}')) {
				st.pop();
			} else {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	if (st.empty()) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}