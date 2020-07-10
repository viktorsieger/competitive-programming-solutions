#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c;

    cin >> a >> b >> c;

    cout << (c - b < b - a ? b - a : c - b) - 1 << '\n';

    return 0;
}
