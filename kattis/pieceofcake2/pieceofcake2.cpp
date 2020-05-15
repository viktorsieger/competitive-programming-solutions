#include <iostream>

int main() {

    short int n, h, v;

    std::cin >> n >> h >> v;

    if(n - h > h) {
        std::cout << (n - v > v ? (n - h) * (n - v) : (n - h) * v) * 4 << std::endl;
    }
    else {
        std::cout << (n - v > v ? h * (n - v) : h * v) * 4 << std::endl;
    }

    return 0;
}
