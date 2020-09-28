#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, o = 0;
    string s;

    while(getline(cin, s)) {

        if(s.empty()) {
            o = 0;
        }

        a = count(s.begin(), s.end(), '*');

        cout << string(s.size() - a - o, '.') << string(a, '*') << string(o, '.') << '\n';

        o += a;
    }

    return 0;
}
