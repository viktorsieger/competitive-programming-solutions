#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int j, k, animals[3], l, animalsMaxQuantity[3];
    bool hasSolution = false;

    cin >> animals[0] >> animals[1] >> animals[2] >> l;

    animalsMaxQuantity[0] = l / animals[0];
    animalsMaxQuantity[1] = l / animals[1];
    animalsMaxQuantity[2] = l / animals[2];

    for(int i = 0; i <= animalsMaxQuantity[0]; ++i) {
        for(j = 0; j <= animalsMaxQuantity[1]; ++j) {
            for(k = 0; k <= animalsMaxQuantity[2]; ++k) {
                if(i * animals[0] + j * animals[1] + k * animals[2] == l) {
                    cout << i << ' ' << j << ' ' << k << '\n';
                    hasSolution = true;
                }
            }
        }
    }

    if(!hasSolution) {
        cout << "impossible" << '\n';
    }

    return 0;
}
