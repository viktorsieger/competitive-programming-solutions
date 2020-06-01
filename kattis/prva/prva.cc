#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int r, c, i, j, k, start, end;
    string word;
    vector<string> words;

    cin >> r >> c;

    char crossword[r][c];

    for(i = 0; i < r; ++i) {
        for(j = 0; j < c; ++j) {
            cin >> crossword[i][j];
        }
    }

    for(i = 0; i < r; ++i) {

        for(j = 0; j < c; ++j) {

            if(crossword[i][j] == '#') {
                continue;
            }

            start = j;

            for(k = j + 1; k < c; ++k) {
                if(crossword[i][k] == '#') {
                    break;
                }
            }

            end = k;
            j = k;

            word.clear();

            for(k = start; k < end; ++k) {
                word += crossword[i][k];
            }

            if(word.length() >= 2) {
                words.push_back(word);
            }
        }
    }

    for(i = 0; i < c; ++i) {

        for(j = 0; j < r; ++j) {

            if(crossword[j][i] == '#') {
                continue;
            }

            start = j;

            for(k = j + 1; k < r; ++k) {
                if(crossword[k][i] == '#') {
                    break;
                }
            }

            end = k;
            j = k;

            word.clear();

            for(k = start; k < end; ++k) {
                word += crossword[k][i];
            }

            if(word.length() >= 2) {
                words.push_back(word);
            }
        }
    }

    sort(words.begin(), words.end());

    cout << words.front() << '\n';

    return 0;
}
