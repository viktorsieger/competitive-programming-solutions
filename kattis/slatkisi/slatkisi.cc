#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int c, k;

    cin >> c >> k;

    cout << fixed << setprecision(0) << round((double)c / pow(10, k)) * pow(10, k) << '\n';

    return 0;
}
