#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k, i, crossedOut = 0, start = 0, p, kCrossedOut;

    cin >> n >> k;

    int numbers[n - 1];

    for(i = 0; i < n - 1; ++i) {
        numbers[i] = i + 2;
    }

    while(crossedOut != k) {

        for(i = start; i < n - 1; ++i) {
            if(numbers[i] > 0) {
                start = i + 1;
                p = numbers[i];
                break;
            }
        }

        while(i < n - 1) {

            if(numbers[i] > 0) {

                crossedOut++;

                if(crossedOut == k) {
                    kCrossedOut = numbers[i];
                    break;
                }

                numbers[i] = -1;
            }

            i += p;
        }
    }

    cout << kCrossedOut << '\n';

    return 0;
}
