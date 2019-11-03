#include <iostream>

using namespace std;

int main() {
    int X;
    cin >> X;

    for (int i = 1; i <= X; i++) {
        if (X % i == 0) {
            if (i != X) {
                cout << i << " ";
            } else {
                cout << i;
            }
        }
    }

    cout << endl;

    return 0;
}