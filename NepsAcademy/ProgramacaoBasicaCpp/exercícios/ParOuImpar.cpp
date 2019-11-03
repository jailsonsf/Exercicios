#include <iostream>

using namespace std;

int main() {
    int Bino, Cino;
    cin >> Bino;
    cin >> Cino;

    int result = Bino + Cino;

    if (result % 2 == 0) {
        cout << "Bino\n";

    } else {
        cout << "Cino\n";
        
    }
    
    return 0;
}