#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double X, Y, response;
    cin >> X >> Y;
    response = pow(X, Y);

    cout.precision(4);
    cout.setf(ios::fixed);
    cout << response << "\n" << endl;

    return 0;
}