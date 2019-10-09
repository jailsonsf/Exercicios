#include <iostream>
// #include <math.h>

using namespace std;

int main() {
    double X, Y, response;
    cin >> X >> Y;
    // response = pow(X, Y);
    response = X;

    if (Y == 0) {
        response = 1;

    }

    for (int i = 1; i < Y; i++) {
        response *= X;

    }

    cout.precision(4);
    cout.setf(ios::fixed);
    cout << response << "\n" << endl;

    return 0;
}