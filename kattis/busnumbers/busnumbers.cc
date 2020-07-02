#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, j, n, busNumber;
    vector<int> busNumbers;

    cin >> n;

    for(i = 0; i < n; ++i) {
        cin >> busNumber;
        busNumbers.push_back(busNumber);
    }

    sort(busNumbers.begin(), busNumbers.end());

    for(i = 0; i < n; ++i) {

        for(j = 1; j < n; ++j) {
            if(busNumbers[i] + j != busNumbers[i + j]) {
                break;
            }
        }

        if(j < 3) {
            cout << busNumbers[i];
        }
        else {
            cout << busNumbers[i] << '-' << busNumbers[i + j - 1];
            i = i + j - 1;
        }

        cout << (i != n - 1 ? ' ' : '\n');
    }

    return 0;
}
