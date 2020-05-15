#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    short int a;

    cin >> a;

    if(a > 0) {
        cin >> a;
        cout << (a > 0 ? "1" : "4")  << '\n';
    }
    else {
        cin >> a;
        cout << (a > 0 ? "2" : "3") << '\n';
    }

    return 0;
}