#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int j, p, n, c;

    cin >> p;

    for(int i = 0; i < p; ++i) {

        c = 0;

        cin.ignore(6, ' ');

        cin >> n;

        for(j = n; j > 0; --j) {
            c += j;
        }

        cout << i + 1 << ' ' << c + n << '\n';
    }

    return 0;
}
