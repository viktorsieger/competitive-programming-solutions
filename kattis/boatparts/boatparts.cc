#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int p, n;
    string w;
    unordered_set<string> boatPartsTypes;

    cin >> p >> n;

    for(int i = 0; i < n; ++i) {

        cin >> w;

        boatPartsTypes.insert(w);

        if(boatPartsTypes.size() == p) {
            cout << i + 1 << '\n';
            return 0;
        }
    }

    cout << "paradox avoided\n";

    return 0;
}
