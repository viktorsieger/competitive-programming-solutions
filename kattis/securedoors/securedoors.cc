#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s, e;
    unordered_set<string> b;

    cin.ignore(5, '\n');

    while(cin >> s >> e) {

        if(s == "entry") {

            cout << e << " entered";

            if(b.find(e) != b.end()) {
                cout << " (ANOMALY)";
            }
            else {
                b.insert(e);
            };
        }
        else {

            cout << e << " exited";

            if(b.find(e) == b.end()) {
                cout << " (ANOMALY)";
            }
            else {
                b.erase(e);
            }
        }

        cout << '\n';
    }

    return 0;
}
