#include <iostream>

using namespace std;

int main() {
    int len, sum, vertSum, horiSum, diagoSum;
    cin >> len;

    int magicSquare[len][len];

    for (int i = 0; i < len; i++) {
        horiSum = 0;
        vertSum = 0;
        diagoSum = 0;
        for (int j = 0; j < len; j++) {
            cin >> magicSquare[i][j];

            horiSum += magicSquare[i][j];
            vertSum += magicSquare[j][i];
            diagoSum += magicSquare[j][j];

        }

        if (i == 0) {
            sum = horiSum;

        }

    }

    if (sum == vertSum && sum == diagoSum) {
        cout << sum << "\n";

    } else {
        cout << "-1" << "\n";

    }

    return 0;
}