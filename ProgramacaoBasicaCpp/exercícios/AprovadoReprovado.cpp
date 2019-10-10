#include <iostream>

using namespace std;

int main() {
    float A, B;
    cin >> A >> B;

    float result = (A + B) / 2;

    if (result >= 7) {
        cout << "Aprovado\n";

    } else if (result >= 4) {
        cout << "Recuperacao\n";

    } else {
        cout << "Reprovado\n";

    }
    
    return 0;
}