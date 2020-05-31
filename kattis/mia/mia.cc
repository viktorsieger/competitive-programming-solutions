#include <iostream>

using namespace std;

int calculateScore(char a, char b) {

    if(a == '1' && b == '2' || a == '2' && b == '1') {
        return 777;
    }

    if(a == b) {
        return 100 * a - 4800;
    }

    if(a < b) {
        return 10 * b + a - 528;
    }

    return 10 * a + b - 528;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char s0, s1, r0, r1;
    int scoreS, scoreR;

    do {

        cin >> s0 >> s1 >> r0 >> r1;

        if(!(s0 == '0' && s1 == '0' && r0 == '0' && r1 == '0')) {

            scoreS = calculateScore(s0, s1);
            scoreR = calculateScore(r0, r1);

            if(scoreS == scoreR) {
                cout << "Tie." << '\n';
                continue;
            }

            cout << "Player " << (scoreS > scoreR ? "1" : "2") << " wins." << '\n';
        }

    } while(!(s0 == '0' && s1 == '0' && r0 == '0' && r1 == '0'));

    return 0;
}
