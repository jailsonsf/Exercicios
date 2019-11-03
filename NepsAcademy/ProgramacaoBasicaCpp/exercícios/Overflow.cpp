#include <iostream>

using namespace std;

int main() {
    int limit, P, Q;
    char C;
    cin >> limit >> P >> C >> Q;

    if (C == '+') {
        if (P + Q > limit) {
            cout << "OVERFLOW\n";

        } else {
            cout << "OK\n";

        }
    } else if (C == '*') {
        if (P * Q > limit) {
            cout << "OVERFLOW\n";

        } else {
            cout << "OK\n";

        }
    }

    return 0;
}