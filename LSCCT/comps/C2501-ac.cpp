#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;

    // Registers: A = x, B = y, C = 0 (result), D = 1
    vector<string> operations;
    long long result = 0; // This will be stored in register C

    // We will add x to the result y times
    for (long long i = 0; i < y; ++i) {
        operations.push_back("A C C"); // C = C + A
        result += x; // Simulate the addition
    }

    // Output the number of operations
    cout << operations.size() << endl;

    // Output each operation
    for (const string &op : operations) {
        cout << op << endl;
    }

    // Output the register that contains the final result
    cout << "C" << endl;

    return 0;
}