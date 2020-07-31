#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    char c;
    bool isFailure;
    vector<char> backpack;

    cin >> n;
    cin.ignore(1, '\n');

    for(int i = 0; i < n; ++i) {

        isFailure = false;
        backpack.clear();

        while(cin >> noskipws >> c) {

            if(c == '.') {
                continue;
            }
            else if(c == '$' || c == '|' || c == '*') {
                backpack.push_back(c);
                continue;
            }
            else if(c == '\n') {
                break;
            }

            if(backpack.empty() ||
               (c == 'b' && backpack.back() != '$') ||
               (c == 't' && backpack.back() != '|') ||
               (c == 'j' && backpack.back() != '*')) {
                isFailure = true;
                cin.ignore(101, '\n');
                break;
            }

            backpack.pop_back();
        }

        if(!backpack.empty()) {
            isFailure = true;
        }

        cout << (isFailure ? "NO\n" : "YES\n");
    }

    return 0;
}
