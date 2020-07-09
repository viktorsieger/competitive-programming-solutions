#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char c;
    int ranks[13] = {0}, handStrength = 0;

    while(cin >> c) {

        switch(c) {
            case 'A': ranks[0]++;
                      break;
            case 'T': ranks[9]++;
                      break;
            case 'J': ranks[10]++;
                      break;
            case 'Q': ranks[11]++;
                      break;
            case 'K': ranks[12]++;
                      break;
            default: ranks[(int)c - 49]++;
                     break;
        }

        cin.ignore(2, ' ');
    }

    for(int i = 0; i < 13; ++i) {
        if(ranks[i] > handStrength) {
            handStrength = ranks[i];
        }
    }

    cout << handStrength << '\n';

    return 0;
}
