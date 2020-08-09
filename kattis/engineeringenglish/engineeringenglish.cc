#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string w, w0;
    unordered_set<string> used;

    cin >> w;
    cout << w;
    transform(w.begin(), w.end(), w.begin(), [](unsigned char c){ return tolower(c); });
    used.insert(w);

    while(cin >> w) {

        w0 = w;

        transform(w.begin(), w.end(), w.begin(), [](unsigned char c){ return tolower(c); });

        if(used.find(w) == used.end()) {
            cout << ' ' << w0;
            used.insert(w);
        }
        else {
            cout << " .";
        }
    }

    cout << '\n';

    return 0;
}
