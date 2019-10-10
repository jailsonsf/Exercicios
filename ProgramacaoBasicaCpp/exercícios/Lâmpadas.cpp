#include <iostream>

using namespace std;

int main() {
    int N, lamp1, lamp2;
    cin >> N;

    int lightSwitch[N];

    lamp1 = 0;
    lamp2 = 0;

    for (int i = 0; i < N; i++) {
        cin >> lightSwitch[i];

        if (lightSwitch[i] == 1 && lamp1 == 0) {
            lamp1 = 1;

        } else if (lightSwitch[i] == 1 && lamp1 == 1) {
            lamp1 = 0;

        } else if (lightSwitch[i] == 2) {
            
            if (lamp1 == 1) {
                lamp1 = 0;
            } else {
                lamp1 = 1;
            }

            if (lamp2 == 1) {
                lamp2 = 0;
            } else {
                lamp2 = 1;
            }
        } 
    }

    cout << lamp1 << "\n" << lamp2 << "\n";

    return 0;
}