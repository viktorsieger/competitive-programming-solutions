#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char c;
    int i = 0;

    while(cin >> noskipws >> c) {

        if(c == '\n') {
            cout << "no\n";
            i = 0;
            continue;
        }

        if(c == 'p' || c == 'P') {
            i = 1;
        }
        else if(i == 1 && (c == 'r' || c == 'R') ||
                i == 2 && (c == 'o' || c == 'O') ||
                i == 3 && (c == 'b' || c == 'B') ||
                i == 4 && (c == 'l' || c == 'L') ||
                i == 5 && (c == 'e' || c == 'E') ||
                i == 6 && (c == 'm' || c == 'M')) {

            ++i;

            if(i == 7) {
                cout << "yes\n";
                cin.ignore(80, '\n');
            }
        }
        else {
            i = 0;
        }
    }

    return 0;
}
