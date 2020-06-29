#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, i, maxSameResults = 0;
    string result;
    unordered_map<string, pair<int, int>> results;
    unordered_map<string, pair<int, int>>::iterator search;

    cin >> n;

    for(i = 0; i < n; ++i) {

        cin >> result;

        if((search = results.find(result)) != results.end()) {
            search->second.first++;
        }
        else {
            results.insert({result, {1, 0}});
        }
    }

    for(i = 0; i < n; ++i) {

        cin >> result;

        if((search = results.find(result)) != results.end()) {
            search->second.second++;
        }
    }

    for(auto result : results) {
        maxSameResults += result.second.first < result.second.second ?
                          result.second.first : result.second.second;
    }

    cout << maxSameResults << '\n';

    return 0;
}
