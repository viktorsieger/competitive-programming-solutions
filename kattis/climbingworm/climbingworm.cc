#include <iostream>
#include <cmath>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, h;

    cin >> a >> b >> h;

    cout << (a >= h ? 1 : ceil((double)(h - b) / (a - b))) << '\n';

    return 0;
}
