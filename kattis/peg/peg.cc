#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char board[7][7];
    int i, j, moves = 0;

    for(i = 0; i < 7; ++i) {

        for(j = 0; j < 7; ++j) {
            board[i][j] = cin.get();
        }

        cin.get();
    }

    for(i = 0; i < 7; ++i) {

        for(j = 0; j < 7; ++j) {

            if(board[i][j] != 'o') {
                continue;
            }

            if(j >= 2 && board[i][j - 1] == 'o' && board[i][j - 2] == '.') {
                moves++;
            }

            if(j <= 4 && board[i][j + 1] == 'o' && board[i][j + 2] == '.') {
                moves++;
            }

            if(i >= 2 && board[i - 1][j] == 'o' && board[i - 2][j] == '.') {
                moves++;
            }

            if(i <= 4 && board[i + 1][j] == 'o' && board[i + 2][j] == '.') {
                moves++;
            }
        }
    }

    cout << moves << '\n';

    return 0;
}
