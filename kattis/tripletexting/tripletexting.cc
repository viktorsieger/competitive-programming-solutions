#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;

    cin >> s;

    cout << (s.substr(0, s.size() / 3) == s.substr(s.size() / 3, s.size() / 3) ?
            s.substr(0, s.size() / 3) : s.substr(s.size() / 3 * 2)) << '\n';

    return 0;
}
