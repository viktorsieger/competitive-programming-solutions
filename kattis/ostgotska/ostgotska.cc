#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string word;
    int wordsTotal = 0, wordsOstgotska = 0;

    while(cin >> word) {

        if(word.find("ae") != string::npos) {
            wordsOstgotska++;
        }

        wordsTotal++;
    }

    if((double)wordsOstgotska / (double)wordsTotal >= 0.4) {
        cout << "dae ae ju traeligt va" << '\n';
    }
    else {
        cout << "haer talar vi rikssvenska" << '\n';
    }

    return 0;
}