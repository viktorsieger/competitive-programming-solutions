#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char c;
    string ct, k;

    cin >> ct >> k;

    for(int i = 0; i < ct.size(); ++i) {

        c = (char)((int)ct[i] - (int)k[i] + 65);

        if((int)c < 65) {
            c = (char)((int)c + 26);
        }

        cout << c;

        k += c;
    }

    cout << '\n';

    return 0;
}
