#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, nm, mostVotes = 0;
    bool hasSingleWinner;
    string candidate, party;
    unordered_map<string, pair<string, int>> riding;
    unordered_map<string, pair<string, int>>::iterator search;

    cin >> nm;
    cin.ignore(1, '\n');

    for(i = 0; i < nm; ++i) {

        getline(cin, candidate);
        getline(cin, party);

        riding.insert({candidate, {party, 0}});
    }

    cin >> nm;
    cin.ignore(1, '\n');

    for(i = 0; i < nm; ++i) {

        getline(cin, candidate);

        if((search = riding.find(candidate)) != riding.end()) {
            ++search->second.second;
        }
    }

    for(const auto& candidate : riding) {
        if(candidate.second.second > mostVotes) {
            party = candidate.second.first;
            mostVotes = candidate.second.second;
            hasSingleWinner = true;
        }
        else if(candidate.second.second == mostVotes) {
            hasSingleWinner = false;
        }
    }

    cout << (hasSingleWinner ? party : "tie") << '\n';

    return 0;
}
