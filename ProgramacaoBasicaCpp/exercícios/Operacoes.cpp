#include <iostream>

using namespace std;

int main() {
    char op;
    cin >> op;

    float A, B;
    cin >> A >> B;

    if (op == 'M') {
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << A * B << "\n";

    } else if (op == 'D') {
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << A / B << "\n";

    }

    return 0;
}