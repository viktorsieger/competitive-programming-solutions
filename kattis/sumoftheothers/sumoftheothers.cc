#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string line;
    int integer, total;
    vector<int> integers;

    while(getline(cin, line)) {

        integers.clear();
        total = 0;

        istringstream iss(line);

        while(iss >> integer) {
            integers.push_back(integer);
            total += integer;
        }

        for(int integer : integers) {
            if(total - integer == integer) {
                cout << integer << '\n';
                break;
            }
        }
    }

    return 0;
}
