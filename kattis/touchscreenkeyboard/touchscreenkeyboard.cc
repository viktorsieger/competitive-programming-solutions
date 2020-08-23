#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

const char KEYBOARD[3][10] = {{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
                              {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ' '},
                              {'z', 'x', 'c', 'v', 'b', 'n', 'm', ' ', ' ', ' '}};

pair<int, int> findIndex(const char (&keyboard)[3][10], const char& c) {

    int j;

    for(int i = 0; i < 3; ++i) {
        for(j = 0; j < 10; ++j) {
            if(c == keyboard[i][j]) {
                return {i, j};
            }
        }
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
            wIndexes.push_back(findIndex(KEYBOARD, w[j]));
        }

        for(j = 0; j < l; ++j) {

            d = 0;

            cin >> s;

            for(k = 0; k < s.size(); ++k) {

                sIndex = findIndex(KEYBOARD, s[k]);

                d += abs(wIndexes[k].first - sIndex.first) + abs(wIndexes[k].second - sIndex.second);
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
