#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k, a, b, p = 1;

    cin >> k >> a;

    for(int i = 1; i < k; ++i) {

        cin >> b;

        if(b < a) {
            ++p;
        }

        a = b;
    }

    cout << p << '\n';

    return 0;
}
