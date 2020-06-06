#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string howl;

    cin >> howl;

    cout << string(howl.length() - 2, 'A') << "WHO" << '\n';

    return 0;
}
