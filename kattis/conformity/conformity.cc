#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

namespace std {
    template<>
    struct hash<array<short int, 5>> {
        size_t operator()(array<short int, 5> const& a) const noexcept {

            size_t seed = 0;

            for(const short int& i : a) {
                seed ^= hash<short int>{}(i) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
            }

            return seed;
        }
    };
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, j;
    unordered_map<array<short int, 5>, short int> popularity;
    array<short int, 5> courses;
    short int mostPopularValue, mostPopularCount;

    cin >> n;

    for(int i = 0; i < n; ++i) {

        for(j = 0; j < 5; ++j) {
            cin >> courses[j];
        }

        sort(courses.begin(), courses.end());

        auto search = popularity.find(courses);

        if(search != popularity.end()) {
            (search->second)++;
        }
        else {
            popularity[courses] = 1;
        }
    }

    mostPopularValue = -1;

    for(const auto& k : popularity) {
        if(k.second > mostPopularValue) {
            mostPopularValue = k.second;
            mostPopularCount = 1;
        }
        else if(k.second == mostPopularValue) {
            mostPopularCount++;
        }
    }

    cout << mostPopularValue * mostPopularCount << '\n';

    return 0;
}
