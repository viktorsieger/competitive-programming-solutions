#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, n, index[6] = {0}, a;

    cin >> n;

    for(i = 0; i < n; ++i) {

        cin >> a;

        if(index[a - 1] == 0) {
            index[a - 1] = i + 1;
        }
        else if(index[a - 1] > 0) {
            index[a - 1] = -1;
        }
    }

    for(i = 5; i > -1; --i) {
        if(index[i] > 0) {
            break;
        }
    }

    if(i > -1) {
        cout << index[i] << '\n';
    }
    else {
        cout << "none\n";
    }

    return 0;
}
