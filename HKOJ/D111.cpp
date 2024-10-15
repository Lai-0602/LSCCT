#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    double w, h;
    cin >> w >> h;
    double bmi = w / pow(h, 2);
    cout << setprecision(3) << bmi << "\n";

    if (bmi < 18.5) {
        cout << "Underweight\n";
    } else if (bmi < 23) {
        cout << "Normal\n";
    } else if (bmi < 25) {
        cout << "Overweight\n";
    } else {
        cout << "Obese\n";
    }
    return 0;
}