#include <iostream>

using namespace std;

char first(char c) {

    switch(c) {
        case 'e': return 'd';
        case 't': return 't';
        case 'a': return 'b';
        case 'o': return 'n';
        case 'i': return 'g';
        case 'n': return 'n';
        case 's': return 't';
        case 'h': return 'g';
        case 'r': return 'p';
        case 'd': return 'd';
        case 'l': return 'k';
        case 'c': return 'c';
        case 'u': return 't';
        case 'm': return 'n';
        case 'w': return 't';
        case 'f': return 'g';
        case 'g': return 'g';
        case 'y': return 't';
        case 'p': return 'p';
        case 'b': return 'b';
        case 'v': return 't';
        case 'k': return 'k';
        case 'j': return 'k';
        case 'x': return 't';
        case 'q': return 'p';
        case 'z': return 't';
        case 'E': return 'd';
        case 'T': return 't';
        case 'A': return 'b';
        case 'O': return 'n';
        case 'I': return 'g';
        case 'N': return 'n';
        case 'S': return 't';
        case 'H': return 'g';
        case 'R': return 'p';
        case 'D': return 'd';
        case 'L': return 'k';
        case 'C': return 'c';
        case 'U': return 't';
        case 'M': return 'n';
        case 'W': return 't';
        case 'F': return 'g';
        case 'G': return 'g';
        case 'Y': return 't';
        case 'P': return 'p';
        case 'B': return 'b';
        case 'V': return 't';
        case 'K': return 'k';
        case 'J': return 'k';
        case 'X': return 't';
        case 'Q': return 'p';
        case 'Z': return 't';
    }

    return (char)0;
}

char end(char c) {

    switch(c) {
        case 't': return 'u';
        case 'n': return 'o';
        case 'd': return 'a';
        case 'c': return 'a';
        case 'g': return 'a';
        case 'p': return 'o';
        case 'b': return 'a';
        case 'k': return 'o';
        case 'T': return 'u';
        case 'N': return 'o';
        case 'D': return 'a';
        case 'C': return 'a';
        case 'G': return 'a';
        case 'P': return 'o';
        case 'B': return 'a';
        case 'K': return 'o';
    }

    return (char)0;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    bool isSubsequentSyllable = false;
    char c, p = ' ', s;

    while(cin >> noskipws >> c) {

        if(c == '-') {
            p = '-';
            isSubsequentSyllable = true;
            continue;
        }

        if(c == ' ') {
            isSubsequentSyllable = false;
        }

        if(p == ' ') {
            s = first(c);
            c = (int)c < 97 ? (char)((int)s - 32) : s;
        }

        if(isSubsequentSyllable && (c == 'b' ||
                                    c == 'c' ||
                                    c == 'd' ||
                                    c == 'g' ||
                                    c == 'k' ||
                                    c == 'n' ||
                                    c == 'p' ||
                                    c == 't')) {
            c = s;
        }

        if((c == ' ' || c == '\n') && (p == 'b' ||
                                       p == 'B' ||
                                       p == 'c' ||
                                       p == 'C' ||
                                       p == 'd' ||
                                       p == 'D' ||
                                       p == 'g' ||
                                       p == 'G' ||
                                       p == 'k' ||
                                       p == 'K' ||
                                       p == 'n' ||
                                       p == 'N' ||
                                       p == 'p' ||
                                       p == 'P' ||
                                       p == 't' ||
                                       p == 'T')) {
            cout << end(p) << 'h';
        }

        cout << c;

        p = c;
    }

    return 0;
}
