#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    bool isHarshad = false;
    int x, y, s;

    cin >> x;

    do {
        s = 0;
        y = x;

        while(y > 0) {
            s += y % 10;
            y /= 10;
        }

        if(x % s == 0) {
            isHarshad = true;
        }
        else {
            ++x;
        }

    } while(!isHarshad);

    cout << x << '\n';

    return 0;
}
