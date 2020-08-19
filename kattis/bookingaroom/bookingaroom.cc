#include <iostream>
#include <unordered_set>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int r, n;

    cin >> r >> n;

    if(r == n) {
        cout << "too late\n";
        return 0;
    }

    int i, room;
    unordered_set<int> booked;

    for(i = 0; i < n; ++i) {
        cin >> room;
        booked.insert(room);
    }

    for(i = r; i > 0; --i) {
        if(booked.find(i) == booked.end()) {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}
