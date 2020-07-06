#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int abc[3];
    char c;

    cin >> abc[0] >> abc[1] >> abc[2];

    sort(abc, abc + 3);

    while(cin >> c) {
        cout << abc[(int)c - 65] << ' ';
    }

    cout << '\n';

    return 0;
}
