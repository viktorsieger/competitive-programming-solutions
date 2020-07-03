#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, junk, junkMin = 1000000001, days;

    cin >> n;

    for(int i = 0; i < n; ++i) {

        cin >> junk;

        if(junk < junkMin) {
            junkMin = junk;
            days = i;
        }
    }

    cout << days << '\n';

    return 0;
}
