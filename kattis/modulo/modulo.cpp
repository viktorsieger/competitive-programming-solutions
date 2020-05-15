#include <iostream>

using namespace std;

int main() {

    int i, x, distinctValues = 0;
    bool values[42] = {false};

    for(i = 0; i < 10; i++) {
        cin >> x;
        values[x % 42] = true;
    }

    for(i = 0; i < 42; i++) {
        if(values[i]) {
            distinctValues++;
        }
    }

    cout << distinctValues << endl;

    return 0;
}
