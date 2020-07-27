#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i = 1, j, separation;
    string line;

    while(getline(cin, line)) {

        if(line == "END") {
            break;
        }

        for(j = 1; j < line.size(); ++j) {
            if(line[j] == '*') {
                separation = j;
                ++j;
                break;
            }
        }

        while(j < line.size()) {

            if(line[j] != line[j % separation]) {
                break;
            }

            ++j;
        }

        cout << i << (j == line.size() ? " EVEN\n" : " NOT EVEN\n");

        ++i;
    }

    return 0;
}
