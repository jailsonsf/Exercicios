#include <iostream>

using namespace std;

int main() {
    int len, score;
    string exam, student;

    cin >> len >> exam >> student;

    score = 0;
    for (int i = 0; i < len; i++) {
        if (exam[i] == student[i]) {
            score++;

        }
    }

    cout << score << "\n";

    return 0;
}