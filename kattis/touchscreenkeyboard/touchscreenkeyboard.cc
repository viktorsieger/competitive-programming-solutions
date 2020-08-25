#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

pair<int, int> getIndex(const char& c) {

    switch(c) {
        case 'e': return {0, 2};
        case 't': return {0, 4};
        case 'a': return {1, 0};
        case 'o': return {0, 8};
        case 'i': return {0, 7};
        case 'n': return {2, 5};
        case 's': return {1, 1};
        case 'h': return {1, 5};
        case 'r': return {0, 3};
        case 'd': return {1, 2};
        case 'l': return {1, 8};
        case 'c': return {2, 2};
        case 'u': return {0, 6};
        case 'm': return {2, 6};
        case 'w': return {0, 1};
        case 'f': return {1, 3};
        case 'g': return {1, 4};
        case 'y': return {0, 5};
        case 'p': return {0, 9};
        case 'b': return {2, 4};
        case 'v': return {2, 3};
        case 'k': return {1, 7};
        case 'j': return {1, 6};
        case 'x': return {2, 1};
        case 'q': return {0, 0};
        case 'z': return {2, 0};
    }

    return {-1, -1};
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int j, k, t, l, d;
    string w, s;
    pair<int, int> sIndex;
    vector<pair<int, int>> wIndexes;
    vector<pair<int, string>> distances;

    cin >> t;

    for(int i = 0; i < t; ++i) {

        wIndexes.clear();
        distances.clear();

        cin >> w >> l;

        for(j = 0; j < w.size(); ++j) {
            wIndexes.push_back(getIndex(w[j]));
        }

        for(j = 0; j < l; ++j) {

            d = 0;

            cin >> s;

            for(k = 0; k < s.size(); ++k) {

                if(s[k] != w[k]) {

                    sIndex = getIndex(s[k]);

                    d += abs(wIndexes[k].first - sIndex.first) + abs(wIndexes[k].second - sIndex.second);
                }
            }

            distances.push_back({d, s});
        }

        sort(distances.begin(), distances.end());

        for(const auto& distance : distances) {
            cout << distance.second << ' ' << distance.first << '\n';
        }
    }

    return 0;
}
