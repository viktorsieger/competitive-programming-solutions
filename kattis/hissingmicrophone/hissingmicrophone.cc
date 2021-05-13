#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char c;
    bool p = false;

    while(cin >> c) {

        if(c != 's') {
            p = false;
            continue;
        }

        if(p) {
            break;
        }

        p = true;
    }

    cout << (cin.eof() ? "no hiss\n" : "hiss\n");

    return 0;
}
