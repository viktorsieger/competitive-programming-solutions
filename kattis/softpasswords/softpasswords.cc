#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s, p;

    cin >> s >> p;

    for(int i = 48; i < 58; ++i) {
        if((char)i + p == s || p + (char)i == s) {
            cout << "Yes\n";
            return 0;
        }
    }

    if(p.size() == s.size()) {

        if(p == s) {
            cout << "Yes\n";
            return 0;
        }

        for(string::size_type i = 0; i < p.size(); ++i) {
            if((int)p[i] > 96) {
                p[i] = (char)((int)p[i] - 32);
            }
            else if((int)p[i] > 64) {
                p[i] = (char)((int)p[i] + 32);
            }
        }

        if(p == s) {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";

    return 0;
}
