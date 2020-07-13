#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c, d, heroArrivalTime, dogAttackers;

    cin >> a >> b >> c >> d;

    while(cin >> heroArrivalTime) {

        dogAttackers = 0;
        --heroArrivalTime;

        if(heroArrivalTime % (a + b) < a) {
            ++dogAttackers;
        }

        if(heroArrivalTime % (c + d) < c) {
            ++dogAttackers;
        }

        if(dogAttackers == 2) {
            cout << "both\n";
        }
        else if(dogAttackers == 1) {
            cout << "one\n";
        }
        else {
            cout << "none\n";
        }
    }

    return 0;
}
