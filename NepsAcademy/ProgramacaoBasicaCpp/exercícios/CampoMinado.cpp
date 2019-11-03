# include <iostream>

using namespace std;

int main() {
    int fieldSize;
    cin >> fieldSize;

    int mines[fieldSize];

    for (int i = 0; i < fieldSize; i++) {
        cin >> mines[i];

    }

    int count;
    for (int i = 0; i < fieldSize; i++) {
        count = 0;

        if (i != 0) {
            if (mines[i - 1] == 1) {
                count += 1;

            }
        }

        if (mines[i] == 1) {
            count += 1;

        }

        if (i < fieldSize - 1) {
            if (mines[i + 1] == 1) {
                count += 1;

            }
        }

        cout << count << "\n";
    }

    return 0;
}