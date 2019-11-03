#include <iostream>

using namespace std;

int main() {
    int N, response = 0;
    cin >> N;
    
    int values[N];

    for (int i = 0; i < N; i++) {
        cin >> values[i];

    }

    for (int i = 0; i < N; i++) {
        if (values[i] == 1 && i < N - 2) {
            if (values[i + 1] == 0) {
                if (values[i + 2] == 0) {
                    response += 1;
                }
            }
        }
    }

    cout << response  << "\n" << endl;

    return 0;
}