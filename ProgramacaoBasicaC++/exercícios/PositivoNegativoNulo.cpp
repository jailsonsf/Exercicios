#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    if (number == 0) {
        cout << "nulo\n";

    } else if (number > 0) {
        cout << "positivo\n";

    } else {
        cout << "negativo\n";
        
    }
    
    return 0;
}