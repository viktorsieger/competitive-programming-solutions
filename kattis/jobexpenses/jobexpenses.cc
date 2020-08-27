#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k, sum = 0;

    cin >> n;

    for(int i = 0; i < n; ++i) {

        cin >> k;

        if(k < 0) {
            sum -= k;
        }
    }

    cout << sum << '\n';

    return 0;
}
