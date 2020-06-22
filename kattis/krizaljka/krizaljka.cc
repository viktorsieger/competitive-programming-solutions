#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string a, b;
    int i, j, indexSharedA, indexSharedB;

    cin >> a >> b;

    for(i = 0; i < a.length(); ++i) {
        if((indexSharedB = b.find(a[i])) != string::npos) {
            indexSharedA = i;
            break;
        }
    }

    for(i = 0; i < b.length(); ++i) {

        for(j = 0; j < a.length(); ++j) {
            if(i == indexSharedB) {
                cout << a;
                break;
            }
            else if(j == indexSharedA) {
                cout << b[i];
            }
            else {
                cout << '.';
            }
        }

        cout << '\n';
    }

    return 0;
}
