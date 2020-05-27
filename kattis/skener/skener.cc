#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int r, c, zr, zc, j, k;
    char character;
    string line;

    cin >> r >> c >> zr >> zc;

    for(int i = 0; i < r; ++i) {

        line.clear();

        for(j = 0; j < c; ++j) {

            cin >> character;

            for(k = 0; k < zc; ++k) {
                cout << character;
                line.push_back(character);
            }
        }

        for(j = 1; j < zr; ++j) {
            cout << '\n' << line;
        }

        cout << '\n';
    }

    return 0;
}
