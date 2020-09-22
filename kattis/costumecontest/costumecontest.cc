#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, min = 1001;
    string s;
    map<string, int> m;
    map<string, int>::iterator search;

    cin >> n;

    for(int i = 0; i < n; ++i) {

        cin >> s;

        if((search = m.find(s)) == m.end()) {
            m.insert({s, 1});
        }
        else {
            search->second++;
        }
    }

    for(auto x : m) {
        if(x.second < min) {
            min = x.second;
        }
    }

    for(auto x : m) {
        if(x.second == min) {
            cout << x.first << '\n';
        }
    }

    return 0;
}
