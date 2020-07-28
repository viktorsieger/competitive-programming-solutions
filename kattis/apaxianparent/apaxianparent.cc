#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string y, p;

    cin >> y >> p;

    if(y[y.size() - 2] == 'e' && y[y.size() - 1] == 'x') {
        cout << y << p << '\n';
        return 0;
    }

    char& last = y[y.size() - 1];

    switch(last) {
        case 'a':
        case 'i':
        case 'o':
        case 'u': last = 'e';
        case 'e': cout << y << 'x' << p << '\n';
                  return 0;
    }

    cout << y << "ex" << p << '\n';

    return 0;
}
