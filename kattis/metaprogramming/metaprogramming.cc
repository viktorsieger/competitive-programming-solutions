#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i;
    char y;
    string x, z;
    unordered_map<string, int> definitions;
    unordered_map<string, int>::iterator searchX, searchZ;

    while(getline(cin, x)) {

        istringstream iss(x);

        iss >> x;

        if(x == "define") {

            iss >> i >> x;

            definitions.insert_or_assign(x, i);

            continue;
        }

        iss >> x >> y >> z;

        if((searchX = definitions.find(x)) == definitions.end() ||
           (searchZ = definitions.find(z)) == definitions.end()) {

            cout << "undefined\n";

            continue;
        }

        switch(y) {
            case '<': cout << (searchX->second < searchZ->second ? "true\n" : "false\n");
                      break;
            case '>': cout << (searchX->second > searchZ->second ? "true\n" : "false\n");
                      break;
            case '=': cout << (searchX->second == searchZ->second ? "true\n" : "false\n");
                      break;
        }
    }

    return 0;
}
