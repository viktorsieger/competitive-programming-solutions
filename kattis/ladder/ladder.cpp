#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    const double pi = acos(-1);
    short int h, v;

    cin >> h >> v;

    cout << ceil(h / sin(v * pi / 180)) << '\n';

    return 0;
}