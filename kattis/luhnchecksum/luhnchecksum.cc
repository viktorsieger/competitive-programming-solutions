#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int j, t, s;
    char c;
    vector<int> n;

    cin >> t;
    cin.ignore(1, '\n');

    for(int i = 0; i < t; ++i) {

        n.clear();
        s = 0;

        while(cin >> noskipws >> c) {

            if(c == '\n') {
                break;
            }

            n.push_back((int)c - 48);
        }

        for(j = n.size() - 2; j > -1; j -= 2) {

            n[j] *= 2;

            if(n[j] > 9) {
                n[j] = n[j] % 10 + 1;
            }
        }

        for(int x : n) {
            s += x;
        }

        cout << (s % 10 == 0 ? "PASS\n" : "FAIL\n");
    }

    return 0;
}
