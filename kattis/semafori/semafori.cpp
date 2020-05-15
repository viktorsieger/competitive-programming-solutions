#include <iostream>

using namespace std;

int main(void) {

    int n, l, d, r, g, time = 0, pos = 0, timeStopped;

    cin >> n >> l;

    for(int i = 0; i < n; i++) {

        cin >> d >> r >> g;

        time += d - pos;
        pos += d - pos;

        timeStopped = r - (time % (r + g));

        if(timeStopped > 0) {
            time += timeStopped;
        }
    }

    time += l - pos;

    cout << time << endl;

    return 0;
}
