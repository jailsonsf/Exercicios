#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double N, number;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> number;

        cout.precision(4);
        cout.setf(ios::fixed);
        cout << sqrt(number) << "\n";

    }

    return 0;
}