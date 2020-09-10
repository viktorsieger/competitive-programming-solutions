#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, j, n, a;
    double d, x, y;
    vector<pair<pair<double, double>, bool>> h;

    while(cin >> d >> n) {

        if(n == 0) {
            break;
        }

        h.clear();
        a = 0;

        for(i = 0; i < n; ++i) {
            cin >> x >> y;
            h.push_back({{x, y}, false});
        }

        for(i = 0; i < n; ++i) {
            for(j = i + 1; j < n; ++j) {
                if((h[j].first.first - h[i].first.first) * (h[j].first.first - h[i].first.first) +
                   (h[j].first.second - h[i].first.second) * (h[j].first.second - h[i].first.second) <
                   d * d) {
                    h[i].second = true;
                    h[j].second = true;
                }
            }
        }

        for(const auto& x : h) {
            if(x.second) {
                ++a;
            }
        }

        cout << a << " sour, " << n - a << " sweet\n";
    }

    return 0;
}
