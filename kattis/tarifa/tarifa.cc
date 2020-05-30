#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x, n, p, ans;

    cin >> x >> n;

    ans = x;

    for(int i = 0; i < n; ++i) {
        cin >> p;
        ans += x - p;
    }

    cout << ans << '\n';

    return 0;
}
