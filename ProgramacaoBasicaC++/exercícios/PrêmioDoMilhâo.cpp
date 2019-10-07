#include <iostream>

using namespace std;

int main() {
    int N, day;
    int numberOfAccesses = 0;
    int days = 0;
    cin >> N;

    int i = 0;
    while (i < N) {
        cin >> day;

        if (numberOfAccesses < 1000000) {
            numberOfAccesses += day;
            days += 1;
        }

        i += 1;
    }
    
    cout << days << "\n";

    return 0;
}