#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int alphabet[26] = {0}, i, simplicity = 0, index, erase = 0;
    char c;

    while(cin >> c) {
        alphabet[(int)c - 97]++;
    }

    for(i = 0; i < 26; ++i) {
        if(alphabet[i] > 0) {
            simplicity++;
        }
    }

    if(simplicity <= 2) {
        cout << '0' << '\n';
        return 0;
    }

    sort(alphabet, alphabet + 26);

    for(i = 0; i < 26; ++i) {
        if(alphabet[i] > 0) {
            index = i;
            break;
        }
    }

    for(i = 0; i < simplicity - 2; ++i) {
        erase += alphabet[index + i];
    }

    cout << erase << '\n';

    return 0;
}
