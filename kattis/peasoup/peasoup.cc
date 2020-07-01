#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int j, n, k;
    string restaurant, item;
    bool hasPeaSoup, hasPancakes;

    cin >> n;

    for(int i = 0; i < n; ++i) {

        hasPeaSoup = false;
        hasPancakes = false;

        cin >> k >> ws;
        getline(cin, restaurant);

        for(j = 0; j < k; ++j) {

            getline(cin, item);

            if(item == "pea soup") {
                hasPeaSoup = true;
            }
            else if(item == "pancakes") {
                hasPancakes = true;
            }
        }

        if(hasPeaSoup && hasPancakes) {
            cout << restaurant << '\n';
            return 0;
        }
    }

    cout << "Anywhere is fine I guess" << '\n';

    return 0;
}
