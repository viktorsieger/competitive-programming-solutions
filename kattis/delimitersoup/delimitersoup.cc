#include <iostream>
#include <stack>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, lSize;
    char c;
    stack<char> openDelimiters;

    cin >> lSize;
    cin.ignore(1, '\n');

    for(i = 0; i < lSize; ++i) {

        cin >> noskipws >> c;

        if(c == ' ') {
            continue;
        }

        if(c == '(' || c == '[' || c == '{') {
            openDelimiters.push(c);
            continue;
        }

        if(openDelimiters.empty() ||
           c == ')' && openDelimiters.top() != '(' ||
           c == ']' && openDelimiters.top() != '[' ||
           c == '}' && openDelimiters.top() != '{') {
            break;
        }

        openDelimiters.pop();
    }

    if(i != lSize) {
        cout << c << " " << i << '\n';
    }
    else {
        cout << "ok so far\n";
    }

    return 0;
}
