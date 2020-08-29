#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, l;
    string m;

    cin.ignore(4, '\n');

    while(cin >> m) {

        l = sqrt(m.size());

        while(l > 0) {

            for(i = l - 1; i < m.size(); i += sqrt(m.size())) {
                cout << m[i];
            }

            --l;
        }

        cout << '\n';
    }

    return 0;
}
