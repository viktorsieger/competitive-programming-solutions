#include <iostream>
#include <math.h>

using namespace std;

int ssd(int b, unsigned long int n) {

    int i = 0, sum = 0;

    while(pow(b, i) <= n) {
        i++;
    }

    for(int j = (i - 1); j >= 0; j--) {
        sum += pow(floor(n / pow(b, j)), 2);
	n -= floor(n / pow(b, j)) * pow(b, j);
    }

    return sum;
}

int main(void) {

	int p, k, b;
	unsigned long int n;

	cin >> p;

	for(int i = 0; i < p; i++) {
	    cin >> k >> b >> n;
	    cout << k << " " << ssd(b, n) << endl;
	}

	return 0;
}

