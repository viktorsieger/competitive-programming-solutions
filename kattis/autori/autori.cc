#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char c;

    while(cin >> c) {
        if((int)c < 91 && (int)c != 45) {
            cout << c;
        }
    }

    cout << '\n';

    return 0;
}
