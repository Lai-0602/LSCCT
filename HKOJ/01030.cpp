#include <bits/stdc++.h>
using namespace std;
int main() {
	queue<int> q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}
	for (int i = 0; i < n; i++) {
		if (q.size() == 1) {
			cout << "\n" << q.front();
		} else {
			q.push(q.front());
			q.pop();
			cout << q.front() << " ";
			q.pop();
		}
	}
	return 0;
}