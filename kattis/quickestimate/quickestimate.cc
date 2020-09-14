#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, d;
    char c;

    cin >> n;
    cin.ignore(1, '\n');

    for(int i = 0; i < n; ++i) {

        d = 0;

        while(cin >> noskipws >> c) {

            if(c == '\n') {
                break;
            }

            ++d;
        }

        cout << d << '\n';
    }

    return 0;
}
