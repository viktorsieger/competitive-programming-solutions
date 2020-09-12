#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int p[5], t;

    cin >> p[0] >> p[1] >> p[2] >> p[3] >> p[4];

    do {

        if(p[0] > p[1]) {

            t = p[0];
            p[0] = p[1];
            p[1] = t;

            cout << p[0] << ' ' << p[1] << ' ' << p[2] << ' ' << p[3] << ' ' << p[4] << '\n';
        }

        if(p[1] > p[2]) {

            t = p[1];
            p[1] = p[2];
            p[2] = t;

            cout << p[0] << ' ' << p[1] << ' ' << p[2] << ' ' << p[3] << ' ' << p[4] << '\n';
        }

        if(p[2] > p[3]) {

            t = p[2];
            p[2] = p[3];
            p[3] = t;

            cout << p[0] << ' ' << p[1] << ' ' << p[2] << ' ' << p[3] << ' ' << p[4] << '\n';
        }

        if(p[3] > p[4]) {

            t = p[3];
            p[3] = p[4];
            p[4] = t;

            cout << p[0] << ' ' << p[1] << ' ' << p[2] << ' ' << p[3] << ' ' << p[4] << '\n';
        }
    } while(!(p[0] == 1 && p[1] == 2 && p[2] == 3 && p[3] == 4 && p[4] == 5));

    return 0;
}
