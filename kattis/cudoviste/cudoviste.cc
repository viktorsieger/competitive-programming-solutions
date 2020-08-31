#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, j, r, c, t, p[5] = {0};

    cin >> r >> c;

    char m[r][c];

    for(i = 0; i < r; ++i) {
        for(j = 0; j < c; ++j) {
            cin >> m[i][j];
        }
    }

    for(i = 1; i < r; ++i) {

        for(j = 1; j < c; ++j) {

            if(m[i - 1][j - 1] == '#' ||
               m[i - 1][j] == '#' ||
               m[i][j - 1] == '#' ||
               m[i][j] == '#') {
                continue;
            }

            t = 0;

            if(m[i - 1][j - 1] == 'X') {
                ++t;
            }

            if(m[i - 1][j] == 'X') {
                ++t;
            }

            if(m[i][j - 1] == 'X') {
                ++t;
            }

            if(m[i][j] == 'X') {
                ++t;
            }

            ++p[t];
        }
    }

    for(i = 0; i < 5; ++i) {
        cout << p[i] << '\n';
    }

    return 0;
}
