#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, c = 1, n, x, min, max;

    while(cin >> n) {

        min = 1000000;
        max = -1000000;

        for(i = 0; i < n; ++i) {

            cin >> x;

            if(x < min) {
                min = x;
            }

            if(x > max) {
                max = x;
            }
        }

        cout << "Case " << c << ": " << min << " " << max << " " << max - min << '\n';

        ++c;
    }

    return 0;
}
