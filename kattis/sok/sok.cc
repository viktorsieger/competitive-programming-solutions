#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int bought[3], recipe[3];
    double r = 500;

    cin >> bought[0] >> bought[1] >> bought[2] >>
           recipe[0] >> recipe[1] >> recipe[2];

    for(int i = 0; i < 3; ++i) {
        if((double)bought[i] / (double)recipe[i] < r) {
            r = (double)bought[i] / (double)recipe[i];
        }
    }

    cout << (double)bought[0] - r * (double)recipe[0] << " " <<
            (double)bought[1] - r * (double)recipe[1] << " " <<
            (double)bought[2] - r * (double)recipe[2] << '\n';

    return 0;
}
