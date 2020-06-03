#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, i, scores[3] = {0}, m = 0;
    char correct,
         seqAdrian[3] = {'A', 'B', 'C'},
         seqBruno[4] = {'B', 'A', 'B', 'C'},
         seqGoran[6] = {'C', 'C', 'A', 'A', 'B', 'B'};

    cin >> n;

    for(i = 0; i < n; ++i) {

        cin >> correct;

        if(correct == seqAdrian[i % 3]) {
            scores[0]++;
        }

        if(correct == seqBruno[i % 4]) {
            scores[1]++;
        }

        if(correct == seqGoran[i % 6]) {
            scores[2]++;
        }
    }

    for(i = 0; i < 3; ++i) {
        if(scores[i] > m) {
            m = scores[i];
        }
    }

    cout << m << '\n';

    if(scores[0] == m) {
        cout << "Adrian" << '\n';
    }

    if(scores[1] == m) {
        cout << "Bruno" << '\n';
    }

    if(scores[2] == m) {
        cout << "Goran" << '\n';
    }

    return 0;
}
