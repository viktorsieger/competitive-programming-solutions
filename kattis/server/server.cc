#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, n, t, timeTask, timeTotal = 0;

    cin >> n >> t;

    for(i = 0; i < n; ++i) {

        cin >> timeTask;

        if(timeTotal + timeTask > t) {
            break;
        }
        else {
            timeTotal += timeTask;
        }
    }

    cout << i << '\n';

    return 0;
}
