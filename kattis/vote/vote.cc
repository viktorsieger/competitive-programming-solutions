#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, n, j, totalVotes, mostVotes, votes, candidate;
    bool hasSameVotes;

    cin >> t;

    for(int i = 0; i < t; ++i) {

        cin >> n;

        totalVotes = 0;
        mostVotes = 0;

        for(j = 0; j < n; ++j) {

            cin >> votes;

            totalVotes += votes;

            if(votes > mostVotes) {
                mostVotes = votes;
                candidate = j;
                hasSameVotes = false;
            }
            else if(votes == mostVotes) {
                hasSameVotes = true;
            }
        }

        if(hasSameVotes) {
            cout << "no winner" << '\n';
            continue;
        }

        if(mostVotes > (double)totalVotes / 2) {
            cout << "majority winner " << candidate + 1 << '\n';
        }
        else {
            cout << "minority winner " << candidate + 1 << '\n';
        }
    }

    return 0;
}
