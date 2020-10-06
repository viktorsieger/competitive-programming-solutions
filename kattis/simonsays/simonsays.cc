#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char c, s[10] = {'S', 'i', 'm', 'o', 'n', ' ', 's', 'a', 'y', 's'};
    int j, n, a;

    cin >> n;
    cin.ignore(1, '\n');

    for(int i = 0; i < n; ++i) {

        a = 0;

        for(j = 0; j < 10; ++j) {

            cin >> noskipws >> c;

            if(c != s[a]) {

                if(c != '\n') {
                    cin.ignore(100, '\n');
                }

                break;
            }

            ++a;
        }

        if(j == 10) {

            while(cin >> noskipws >> c) {

                if(c == '\n') {
                    break;
                }

                cout << c;
            }

            cout << '\n';
        }
    }

    return 0;
}
