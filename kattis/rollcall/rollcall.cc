#include <iostream>
#include <string>
#include <map>
#include <set>
#include <utility>
#include <unordered_set>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string firstName, lastName;
    map<string, set<string>> names;
    unordered_multiset<string> firstNames;

    while(cin >> firstName >> lastName) {

        auto search = names.find(lastName);

        if(search == names.end()) {
            set<string> setContainingFirstNames {firstName};
            names.insert(make_pair(lastName, setContainingFirstNames));
        }
        else {
            search->second.insert(firstName);
        }

        firstNames.insert(firstName);
    }

    for(auto const& pair : names) {

        for(auto const& firstName : pair.second) {

            cout << firstName;

            if(firstNames.count(firstName) > 1) {
                cout << " " << pair.first;
            }

            cout << '\n';
        }
    }

    return 0;
}
