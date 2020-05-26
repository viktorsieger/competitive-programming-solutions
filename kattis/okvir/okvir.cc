#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m, n, u, l, r, d, j;
    char charCrossword;

    cin >> m >> n >> u >> l >> r >> d;

    for(int i = 0; i < u + m + d; ++i) {
        for(j = 0; j < l + n + r; ++j) {
            if((u <= i && i < u + m) && (l <= j && j < l + n)) {
                cin >> charCrossword;
                cout << charCrossword;
            }
            else {
                cout << ((i + j) % 2 == 0 ? '#' : '.');
            }
        }

        cout << '\n';
    }

    return 0;
}
