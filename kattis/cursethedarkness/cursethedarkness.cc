#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int j, m, n;
    double bookX, bookY, candleX, candleY;

    cin >> m;

    for(int i = 0; i < m; ++i) {

        cin >> bookX >> bookY >> n;

        for(j = 0; j < n; ++j) {

            cin >> candleX >> candleY;

            if((bookX - candleX) * (bookX - candleX) + (bookY - candleY) * (bookY - candleY) <= 64) {
                break;
            }
        }

        cout << (j == n ? "curse the darkness" : "light a candle") << '\n';

        while(j < n) {
            cin.ignore(26, '\n');
            ++j;
        }
    }

    return 0;
}
