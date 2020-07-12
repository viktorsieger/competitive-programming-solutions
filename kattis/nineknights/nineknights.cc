#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char board[5][5];
    int i, j, knights = 0;
    bool isValid = true;

    for(i = 0; i < 5; ++i) {

        for(j = 0; j < 5; ++j) {

            cin >> board[i][j];

            if(board[i][j] == 'k') {
                knights++;
            }
        }
    }

    if(knights != 9) {
        isValid = false;
        goto end;
    }

    for(i = 0; i < 5; ++i) {

        for(j = 0; j < 5; ++j) {

            if(board[i][j] == '.') {
                continue;
            }

            if((1 < i && 0 < j && board[i - 2][j - 1] == 'k') ||
               (1 < i && j < 4 && board[i - 2][j + 1] == 'k') ||
               (i < 3 && 0 < j && board[i + 2][j - 1] == 'k') ||
               (i < 3 && j < 4 && board[i + 2][j + 1] == 'k') ||
               (0 < i && 1 < j && board[i - 1][j - 2] == 'k') ||
               (i < 4 && 1 < j && board[i + 1][j - 2] == 'k') ||
               (0 < i && j < 3 && board[i - 1][j + 2] == 'k') ||
               (i < 4 && j < 3 && board[i + 1][j + 2] == 'k')) {
                isValid = false;
                goto end;
            }
        }
    }

end:
    cout << (isValid ? "valid\n" : "invalid\n");

    return 0;
}
