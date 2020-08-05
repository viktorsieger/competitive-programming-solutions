#include <iostream>
#include <cmath>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, n;

    cin >> t;

    for(int i = 0; i < t; ++i) {

        cin >> n;

        cout << ceil((double)n / 400) << '\n';
    }

    return 0;
}
