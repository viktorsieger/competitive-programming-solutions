#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int w = 0;
    string s;
    unordered_set<string> u;

    cin.ignore(3, '\n');

    while(w < 12) {

        cin >> s;

        if(u.find(s) != u.end()) {
            cin.ignore(22, '\n');
            continue;
        }

        u.insert(s);

        cout << s << ' ';

        cin >> s;

        cout << s << '\n';

        ++w;
    }

    return 0;
}
