#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, j, k, l, h, w, n, m, x;

    cin >> h >> w >> n >> m;

    int img[h][w], kernel[n][m];

    for(i = 0; i < h; ++i) {
        for(j = 0; j < w; ++j) {
            cin >> img[i][j];
        }
    }

    for(i = 0; i < n; ++i) {
        for(j = 0; j < m; ++j) {
            cin >> kernel[i][j];
        }
    }

    for(i = 0; i < n / 2; ++i) {
        for(j = 0; j < m; ++j) {
            x = kernel[i][j];
            kernel[i][j] = kernel[n - i - 1][j];
            kernel[n - i - 1][j] = x;
        }
    }

    for(i = 0; i < m / 2; ++i) {
        for(j = 0; j < n; ++j) {
            x = kernel[j][i];
            kernel[j][i] = kernel[j][m - i - 1];
            kernel[j][m - i - 1] = x;
        }
    }

    for(i = 0; i < h - n + 1; ++i) {

        for(j = 0; j < w - m + 1; ++j) {

            x = 0;

            for(k = 0; k < n; ++k) {
                for(l = 0; l < m; ++l) {
                    x += kernel[k][l] * img[i + k][j + l];
                }
            }

            cout << x;

            if(j < w - m) {
                cout << ' ';
            }
        }

        cout << '\n';
    }

    return 0;
}
