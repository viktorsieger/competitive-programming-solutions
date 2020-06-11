#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string name;
    unordered_map<string, int> votes;
    int mostVotes = 0;
    bool isElectionTied = false;

    while(getline(cin, name)) {

        if(name == "***") {
            break;
        }

        auto search = votes.find(name);

        if(search == votes.end()) {
            votes.insert({name, 1});
        }
        else {
            search->second++;
        }
    }

    for(const auto& vote : votes) {
        if(vote.second > mostVotes) {
            mostVotes = vote.second;
            name = vote.first;
        }
        else if(vote.second == mostVotes) {
           isElectionTied = true;
        }
    }

    cout << (isElectionTied ? "Runoff!" : name) << '\n';

    return 0;
}
