#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t0, t1, t2, tMax, t = 41, d, i = 1;

    cin.ignore(3, '\n');

    cin >> t0 >> t1;

    while(cin >> t2) {

        if((tMax = t0 < t2 ? t2 : t0) < t) {
            d = i;
            t = tMax;
        }

        t0 = t1;
        t1 = t2;
        ++i;
    }

    cout << d << ' ' << t << '\n';

    return 0;
}
