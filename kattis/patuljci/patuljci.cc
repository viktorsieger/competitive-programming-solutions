#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, j, k, integer, total = 0;
    vector<int> integers;

    while(cin >> integer) {
        integers.push_back(integer);
        total += integer;
    }

    for(i = 0; i < 9; ++i) {
        for(j = i + 1; j < 9; ++j) {
            if(total - integers[i] - integers[j] == 100) {
                goto jump;
            }
        }
    }

jump:
    for(k = 0; k < 9; ++k) {
        if(k != i && k != j) {
            cout << integers[k] << '\n';
        }
    }

    return 0;
}
