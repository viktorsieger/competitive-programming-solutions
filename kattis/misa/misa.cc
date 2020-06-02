#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int r, s, i, j, rMirko, sMirko, shakesMax = 0, shakes, shakesTotal = 0;

    cin >> r >> s;

    char seats[r][s];

    for(i = 0; i < r; ++i) {
        for(j = 0; j < s; ++j) {
            cin >> seats[i][j];
        }
    }

    for(i = 0; i < r; ++i) {

        for(j = 0; j < s; ++j) {

            if(seats[i][j] == 'o') {
                continue;
            }

            shakes = 0;

            if(i > 0 && j > 0 && seats[i - 1][j - 1] == 'o') {
                shakes++;
            }

            if(i > 0 && seats[i - 1][j] == 'o') {
                shakes++;
            }

            if(i > 0 && j < s - 1 && seats[i - 1][j + 1] == 'o') {
                shakes++;
            }

            if(j > 0 && seats[i][j - 1] == 'o') {
                shakes++;
            }

            if(j < s - 1 && seats[i][j + 1] == 'o') {
                shakes++;
            }

            if(i < r - 1 && j > 0 && seats[i + 1][j - 1] == 'o') {
                shakes++;
            }

            if(i < r - 1 && seats[i + 1][j] == 'o') {
                shakes++;
            }

            if(i < r - 1 && j < s - 1 && seats[i + 1][j + 1] == 'o') {
                shakes++;
            }

            if(shakes > shakesMax) {
                rMirko = i;
                sMirko = j;
                shakesMax = shakes;
            }
        }
    }

    if(shakesMax != 0) {
        seats[rMirko][sMirko] = 'o';
    }

    for(i = 0; i < r; ++i) {

        for(j = 0; j < s; ++j) {

            if(seats[i][j] == '.') {
                continue;
            }

            if(j < s - 1 && seats[i][j + 1] == 'o') {
                shakesTotal++;
            }

            if(i < r - 1 && j > 0 && seats[i + 1][j - 1] == 'o') {
                shakesTotal++;
            }

            if(i < r - 1 && seats[i + 1][j] == 'o') {
                shakesTotal++;
            }

            if(i < r - 1 && j < s - 1 && seats[i + 1][j + 1] == 'o') {
                shakesTotal++;
            }
        }
    }

    cout << shakesTotal << '\n';

    return 0;
}
