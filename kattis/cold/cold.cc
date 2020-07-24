#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, t, count = 0;

    cin >> n;

    for(int i = 0; i < n; ++i) {

        cin >> t;

        if(t < 0) {
            ++count;
        }
    }

    cout << count << '\n';

    return 0;
}
