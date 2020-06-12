#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    if(n % 2 == 1) {
        cout << "Either" << '\n';
    }
    else {
        cout << (n % 4 == 0 ? "Even" : "Odd") << '\n';
    }

    return 0;
}
