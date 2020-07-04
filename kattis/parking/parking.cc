#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, prices[3], timesArrival[3], timesDeparture[3],
        timeArrivalFirst = 101, timeDepartureLast = 0, truckQuantity, cost = 0;

    cin >> prices[0] >> prices[1] >> prices[2];

    for(i = 0; i < 3; ++i) {

        cin >> timesArrival[i] >> timesDeparture[i];

        if(timesArrival[i] < timeArrivalFirst) {
            timeArrivalFirst = timesArrival[i];
        }

        if(timesDeparture[i] > timeDepartureLast) {
            timeDepartureLast = timesDeparture[i];
        }
    }

    for(i = timeArrivalFirst; i <= timeDepartureLast; ++i) {

        truckQuantity = 0;

        if(timesArrival[0] <= i && i < timesDeparture[0]) {
            truckQuantity++;
        }

        if(timesArrival[1] <= i && i < timesDeparture[1]) {
            truckQuantity++;
        }

        if(timesArrival[2] <= i && i < timesDeparture[2]) {
            truckQuantity++;
        }

        cost += truckQuantity * prices[truckQuantity - 1];
    }

    cout << cost << '\n';

    return 0;
}
