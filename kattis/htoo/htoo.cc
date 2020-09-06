#include <iostream>
#include <unordered_map>
#include <cmath>

using namespace std;

void readMolecule(unordered_map<char, int>& m) {

    char a, d;
    int l;
    unordered_map<char, int>::iterator s;

    while(cin >> noskipws >> a) {

        if((int)a < 65 || 90 < (int)a) {
            break;
        }

        l = 0;

        while(47 < (int)cin.peek() && (int)cin.peek() < 58) {
            cin >> noskipws >> d;
            l = l * 10 + (int)d - 48;
        }

        if((s = m.find(a)) == m.end()) {
            m.insert({a, l == 0 ? 1 : l});
        }
        else {
            s->second += l == 0 ? 1 : l;
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k, n = 2147483647;
    unordered_map<char, int> m1, m2;
    unordered_map<char, int>::iterator s;

    readMolecule(m1);

    cin >> k;
    cin.ignore(1, '\n');

    readMolecule(m2);

    for(unordered_map<char, int>::iterator it = m1.begin(); it != m1.end(); ++it) {
        it->second *= k;
    }

    for(const auto a : m2) {

        if((s = m1.find(a.first)) == m1.end()) {
            cout << "0\n";
            return 0;
        }

        if((int)floor(s->second / a.second) < n) {
            n = (int)floor(s->second / a.second);
        }
    }

    cout << n << '\n';

    return 0;
}
