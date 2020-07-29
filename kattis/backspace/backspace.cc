#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char c;
    string s;

    while(cin >> c) {
        if(c == '<') {
            s.erase(s.end() - 1);
        }
        else {
            s.push_back(c);
        }
    }

    cout << s << '\n';

    return 0;
}
