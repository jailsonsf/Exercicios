#include <iostream>

using namespace std;

int main() {
    string risada, auxRisada, risadaReverse;

    cin >> auxRisada;

    for (int i = 0; i < auxRisada.size(); i++) {
        if (auxRisada[i] == 'a' || auxRisada[i] == 'e' || auxRisada[i] == 'i' || auxRisada[i] == 'o' || auxRisada[i] == 'u') {
            risada += auxRisada[i];

        }
    }

    risadaReverse = risada;
    int n = risadaReverse.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(risadaReverse[i], risadaReverse[n - i - 1]);

    if (risada == risadaReverse)
        cout << "S\n";

    else
        cout << "N\n";

    return 0;
}