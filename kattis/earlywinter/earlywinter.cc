#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, dm, dmi, k = 0;

    cin >> n >> dm;

    for(int i = 0; i < n; ++i) {

        cin >> dmi;

        if(dmi <= dm) {
            break;
        }

        k++;
    }

    if(k == n) {
        cout << "It had never snowed this early!" << '\n';
    }
    else {
        cout << "It hadn\'t snowed this early in " << k << " years!" << '\n';
    }

    return 0;
}
