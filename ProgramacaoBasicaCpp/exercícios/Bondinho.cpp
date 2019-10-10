#include <iostream>

using namespace std;

int main() {
    int limit = 50;
    int students, monitors;

    cin >> students;
    cin >> monitors;

    if (students + monitors <= limit) {
        cout << "S\n";

    } else {
        cout << "N\n";
        
    }
    
    return 0;
}