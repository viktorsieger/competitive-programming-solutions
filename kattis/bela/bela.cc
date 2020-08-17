#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, p = 0;
    char b, num, s;

    cin >> n >> b;

    n *= 4;

    for(int i = 0; i < n; ++i) {

        cin >> num >> s;

        switch(num) {
            case 'A': p += 11;
                      break;
            case 'K': p += 4;
                      break;
            case 'Q': p += 3;
                      break;
            case 'J': p += s == b ? 20 : 2;
                      break;
            case 'T': p += 10;
                      break;
            case '9': p += s == b ? 14 : 0;
                      break;
        }
    }

    cout << p << '\n';

    return 0;
}
