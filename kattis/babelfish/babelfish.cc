#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string line, wordEnglish, wordForeign;
    unordered_map<string, string> dictionary;
    unordered_map<string, string>::iterator search;

    while(getline(cin, line)) {

        if(line.empty()) {
            break;
        }

        istringstream iss(line);

        iss >> wordEnglish >> wordForeign;

        dictionary.insert({wordForeign, wordEnglish});
    }

    while(cin >> wordForeign) {
        if((search = dictionary.find(wordForeign)) != dictionary.end()) {
            cout << search->second << '\n';
        }
        else {
            cout << "eh\n";
        }
    }

    return 0;
}
