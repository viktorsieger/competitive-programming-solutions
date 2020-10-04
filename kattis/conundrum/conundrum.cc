#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char c;
    int i = 0, d = 0;

    while(cin >> c) {

        if(i % 3 == 0 && c != 'P' ||
           i % 3 == 1 && c != 'E' ||
           i % 3 == 2 && c != 'R') {
            ++d;
        }

        ++i;
    }

    cout << d << '\n';

    return 0;
}
