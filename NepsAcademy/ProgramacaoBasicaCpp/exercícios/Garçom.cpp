#include <iostream>

using namespace std;

int main() {
    int brokenCups = 0;
    int N, cans, cups;

    cin >> N;

    int i = 0;
    while(i < N) {
        cin >> cans >> cups;

        if (cans > cups) {
            brokenCups += cups;
        }
        i += 1;
    }

    cout << brokenCups << "\n";

    return 0;
}