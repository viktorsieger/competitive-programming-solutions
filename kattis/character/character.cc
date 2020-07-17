#include <iostream>
#include <iomanip>

using namespace std;

double factorial(int n) {
    if(n < 2) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    double relationships = 0;

    cin >> n;

    for(int i = 2; i <= n; ++i) {
        relationships += factorial(n) / (factorial(i) * factorial(n - i));
    }

    cout << fixed << setprecision(0) << relationships << '\n';

    return 0;
}
