#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, n;
    string line, name, item;
    map<string, vector<string>> data;
    map<string, vector<string>>::iterator search;

    while(cin >> n) {

        if(n == 0) {
            break;
        }

        cin.ignore(1, '\n');

        data.clear();

        for(i = 0; i < n; ++i) {

            getline(cin, line);

            istringstream iss(line);

            iss >> name;

            while(iss >> item) {
                if((search = data.find(item)) != data.end()) {
                    search->second.push_back(name);
                }
                else {
                    data.insert({item, {name}});
                }
            }
        }

        for(auto& item : data) {

            cout << item.first;

            sort(item.second.begin(), item.second.end());

            for(const string& name : item.second) {
                cout << ' ' << name;
            }

            cout << '\n';
        }

        cout << '\n';
    }

    return 0;
}
