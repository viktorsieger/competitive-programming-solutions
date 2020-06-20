#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string word;
    unordered_set<string> words;
    bool isRepeated = false;

    while(cin >> word) {
        if(words.find(word) == words.end()) {
            words.insert(word);
        }
        else {
            isRepeated = true;
            break;
        }
    }

    cout << (isRepeated ? "no" : "yes") << '\n';

    return 0;
}
