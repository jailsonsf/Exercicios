#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B && B == C) {
        cout << "*" << "\n" << endl;

    } else if (A == B && B != C) {
        cout << "C" << "\n" << endl;

    } else if (A == C && C != B) {
        cout << "B" << "\n" << endl;

    } else {
        cout << "A" << "\n" << endl;

    }
    
    return 0;
}