#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string line;
    int toner;
    char character;

    while(getline(cin, line)) {

        toner = 0;

        istringstream iss(line);

        while(iss >> noskipws >> character) {
            switch(character) {
                case ' ': toner += 0;
                          break;
                case '!': toner += 9;
                          break;
                case '"': toner += 6;
                          break;
                case '#': toner += 24;
                          break;
                case '$': toner += 29;
                          break;
                case '%': toner += 22;
                          break;
                case '&': toner += 24;
                          break;
                case '\'': toner += 3;
                           break;
                case '(': toner += 12;
                          break;
                case ')': toner += 12;
                          break;
                case '*': toner += 17;
                          break;
                case '+': toner += 13;
                          break;
                case ',': toner += 7;
                          break;
                case '-': toner += 7;
                          break;
                case '.': toner += 4;
                          break;
                case '/': toner += 10;
                          break;
                case '0': toner += 22;
                          break;
                case '1': toner += 19;
                          break;
                case '2': toner += 22;
                          break;
                case '3': toner += 23;
                          break;
                case '4': toner += 21;
                          break;
                case '5': toner += 27;
                          break;
                case '6': toner += 26;
                          break;
                case '7': toner += 16;
                          break;
                case '8': toner += 23;
                          break;
                case '9': toner += 26;
                          break;
                case ':': toner += 8;
                          break;
                case ';': toner += 11;
                          break;
                case '<': toner += 10;
                          break;
                case '=': toner += 14;
                          break;
                case '>': toner += 10;
                          break;
                case '?': toner += 15;
                          break;
                case '@': toner += 32;
                          break;
                case 'A': toner += 24;
                          break;
                case 'B': toner += 29;
                          break;
                case 'C': toner += 20;
                          break;
                case 'D': toner += 26;
                          break;
                case 'E': toner += 26;
                          break;
                case 'F': toner += 20;
                          break;
                case 'G': toner += 25;
                          break;
                case 'H': toner += 25;
                          break;
                case 'I': toner += 18;
                          break;
                case 'J': toner += 18;
                          break;
                case 'K': toner += 21;
                          break;
                case 'L': toner += 16;
                          break;
                case 'M': toner += 28;
                          break;
                case 'N': toner += 25;
                          break;
                case 'O': toner += 26;
                          break;
                case 'P': toner += 23;
                          break;
                case 'Q': toner += 31;
                          break;
                case 'R': toner += 28;
                          break;
                case 'S': toner += 25;
                          break;
                case 'T': toner += 16;
                          break;
                case 'U': toner += 23;
                          break;
                case 'V': toner += 19;
                          break;
                case 'W': toner += 26;
                          break;
                case 'X': toner += 18;
                          break;
                case 'Y': toner += 14;
                          break;
                case 'Z': toner += 22;
                          break;
                case '[': toner += 18;
                          break;
                case '\\': toner += 10;
                           break;
                case ']': toner += 18;
                          break;
                case '^': toner += 7;
                          break;
                case '_': toner += 8;
                          break;
                case '`': toner += 3;
                          break;
                case 'a': toner += 23;
                          break;
                case 'b': toner += 25;
                          break;
                case 'c': toner += 17;
                          break;
                case 'd': toner += 25;
                          break;
                case 'e': toner += 23;
                          break;
                case 'f': toner += 18;
                          break;
                case 'g': toner += 30;
                          break;
                case 'h': toner += 21;
                          break;
                case 'i': toner += 15;
                          break;
                case 'j': toner += 20;
                          break;
                case 'k': toner += 21;
                          break;
                case 'l': toner += 16;
                          break;
                case 'm': toner += 22;
                          break;
                case 'n': toner += 18;
                          break;
                case 'o': toner += 20;
                          break;
                case 'p': toner += 25;
                          break;
                case 'q': toner += 25;
                          break;
                case 'r': toner += 13;
                          break;
                case 's': toner += 21;
                          break;
                case 't': toner += 17;
                          break;
                case 'u': toner += 17;
                          break;
                case 'v': toner += 13;
                          break;
                case 'w': toner += 19;
                          break;
                case 'x': toner += 13;
                          break;
                case 'y': toner += 24;
                          break;
                case 'z': toner += 19;
                          break;
                case '{': toner += 18;
                          break;
                case '|': toner += 12;
                          break;
                case '}': toner += 18;
                          break;
                case '~': toner += 9;
                          break;
            }
        }

        cout << toner << '\n';
    }

    return 0;
}
