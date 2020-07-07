#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char c;
    int m = 0, n = 0, raggednessScore = 0;
    vector<int> lineLengths;

    while(cin >> noskipws >> c) {

        if(c != '\n') {
            m++;
        }
        else {

            lineLengths.push_back(m);

            if(m > n) {
                n = m;
            }

            m = 0;
        }
    }

    lineLengths.pop_back();

    for(int m : lineLengths) {
        raggednessScore += (n - m) * (n - m);
    }

    cout << raggednessScore << '\n';

    return 0;
}
