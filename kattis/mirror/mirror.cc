#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, r, c, j, k;

    cin >> t;

    for(int i = 0; i < t; ++i) {

        cin >> r >> c;

        char image[r][c];

        for(j = 0; j < r; ++j) {
            for(k = 0; k < c; ++k) {
                cin >> image[j][k];
            }
        }

        cout << "Test " << i + 1 << '\n';

        for(j = r - 1; j >= 0; --j) {

            for(k = c - 1; k >= 0; --k) {
                cout << image[j][k];
            }

            cout << '\n';
        }
    }

    return 0;
}
