#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, integers[3], diff;

    cin >> integers[0] >> integers[1] >> integers[2];

    sort(integers, integers + 3);

    diff = integers[1] - integers[0] < integers[2] - integers[1] ?
           integers[1] - integers[0] : integers[2] - integers[1];

    for(i = 0; i < 2; ++i) {
        if(integers[i] + diff != integers[i + 1]) {
            break;
        }
    }

    cout << integers[i] + diff << '\n';

    return 0;
}
