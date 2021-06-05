#include <iostream>
#include <set>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    char c;
    set<char> a{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}, s;

    cin >> n;
    cin.ignore(1, '\n');

    for(int i = 0; i < n; ++i) {

        s = a;

        while(cin >> noskipws >> c) {

            if(c == '\n') {
                break;
            }

            s.erase(c);

            if((int)c > 64) {
                s.erase(c + 32);
            }
        }

        cout << (s.empty() ? "pangram" : "missing ");

        for(char x : s) {
            cout << x;
        }

        cout << '\n';
    }

    return 0;
}
