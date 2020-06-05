#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, x;

    cin >> n;

    for(int i = 0; i < n; ++i) {

        cin >> x;

        cout << x << (x % 2 == 0 ? " is even" : " is odd") << '\n';
    }

    return 0;
}
