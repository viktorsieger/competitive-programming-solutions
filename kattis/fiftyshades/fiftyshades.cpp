#include <iostream>
#include <limits>
#include <string>
#include <algorithm>

int main() {

    short int n, t = 0;
    std::string str;

    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for(int i = 0; i < n; ++i) {
        getline(std::cin, str);
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);

        if((str.find("pink") != std::string::npos) || (str.find("rose") != std::string::npos)) {
            t++;
        }
    }

    if(t != 0) {
        std::cout << t << std::endl;
    }
    else {
        std::cout << "I must watch Star Wars with my daughter" << std::endl;
    }

    return 0;
}
