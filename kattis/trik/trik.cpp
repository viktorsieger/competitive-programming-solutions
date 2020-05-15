#include <iostream>
int main()
{
    int i = 0, x = 1;
    char m[50];
    std::cin >> m;
    while (m[i] != '\0') {
        if ((m[i] == 'A') && (x != 3)) {
            x == 1 ? x = 2 : x = 1;
        }
        else if ((m[i] == 'B') && (x != 1)) {
            x == 2 ? x = 3 : x = 2;
        }
        else if ((m[i] == 'C') && (x != 2)) {
            x == 1 ? x = 3 : x = 1;
        }
        i++;
    }
    std::cout << x << std::endl;
    return 0;
}
