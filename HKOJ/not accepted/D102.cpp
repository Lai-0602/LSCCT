#include <bits/stdc++.h>
using namespace std;
int main() {
	char d;
	cin >> d;
	double n;
	cin >> n;
	int t = n * 10;
	cout << d << fixed << setprecision(1) << (t + 1) / 2 / 10.0;
}