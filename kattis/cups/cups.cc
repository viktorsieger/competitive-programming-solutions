#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string t1, t2;
    map<int, string> cups;

    cin >> n;

    for(int i = 0; i < n; ++i) {

        cin >> t1 >> t2;

        if((int)t1[0] < 58) {
            cups.insert({stoi(t1) / 2, t2});
        }
        else {
            cups.insert({stoi(t2), t1});
        }
    }

    for(const auto& cup : cups) {
        cout << cup.second << '\n';
    }

    return 0;
}
