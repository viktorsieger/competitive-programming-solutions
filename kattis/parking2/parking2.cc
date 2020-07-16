#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int j, t, n, x, xMin, xMax;

    cin >> t;

    for(int i = 0; i < t; ++i) {

        xMin = 99;
        xMax = 0;

        cin >> n;

        for(j = 0; j < n; ++j) {

            cin >> x;

            if(x < xMin) {
                xMin = x;
            }

            if(x > xMax) {
                xMax = x;
            }
        }

        cout << (xMax - xMin) * 2 << '\n';
    }

    return 0;
}
