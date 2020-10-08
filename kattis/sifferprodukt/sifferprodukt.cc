#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x, y;

    cin >> x;

    do {

        y = 1;

        while(x > 0) {
            y *= x % 10 == 0 ? 1 : x % 10;
            x /= 10;
        }

        x = y;

    } while(y > 9);

    cout << y << '\n';

    return 0;
}
