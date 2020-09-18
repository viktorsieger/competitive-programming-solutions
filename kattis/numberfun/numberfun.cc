#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    double a, b, c;

    cin >> n;

    for(int i = 0; i < n; ++i) {

        cin >> a >> b >> c;

        if(a + b == c ||
           a - b == c ||
           b - a == c ||
           a * b == c ||
           a / b == c ||
           b / a == c) {
            cout << "Possible\n";
        }
        else {
            cout << "Impossible\n";
        }
    }

    return 0;
}
