#include <iostream>
#include <cmath>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int b, br, bs, a, as, x;

    cin >> b >> br >> bs >> a >> as;

    x = ceil(a + (bs * br - bs * b) / (double)as);

    cout << (as * x - as * a == bs * br - bs * b ? x + 1 : x) << '\n';

    return 0;
}
