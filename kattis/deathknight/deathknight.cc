#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int battlesWon;
    char prev, c;

    cin >> battlesWon >> prev;

    while(cin >> noskipws >> c) {
        if(prev == 'C' && c == 'D') {
            --battlesWon;
            cin.ignore(999, '\n');
            cin >> prev;
        }
        else {
            prev = c;
        }
    }

    cout << battlesWon << '\n';

    return 0;
}
