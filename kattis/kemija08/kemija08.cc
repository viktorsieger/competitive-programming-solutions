#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char c;

    while(cin >> noskipws >> c) {

        if(c == 'a' ||
           c == 'e' ||
           c == 'i' ||
           c == 'o' ||
           c == 'u') {
            cin.ignore(2, c);
        }

        cout << c;
    }

    return 0;
}
