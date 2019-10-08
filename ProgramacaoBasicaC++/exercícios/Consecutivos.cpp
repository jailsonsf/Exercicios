#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int drawnValue, score, auxScore, auxValue = 0;

    for (int i = 0; i < N; i++) {
        cin >> drawnValue;

        if (i == 0) {
            auxScore = 1;
            auxValue = drawnValue;

        } else if (drawnValue == auxValue) {
            auxScore += 1;
            auxValue = drawnValue;

        } else {
            if (auxScore > score) {
                score = auxScore;

            }
            
            auxValue = drawnValue;
            auxScore = 1;

        }

        if (auxScore > score) {
            score = auxScore;

        }
    }

    cout << score << "\n";

    return 0;
}