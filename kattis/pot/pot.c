#include<stdio.h>
#include<limits.h>
#include<math.h>

double pow2(int base, int exponent) {

	int divisor = 2, baseA, baseB;
	double XA, XB;

	if(exponent == 0) {
		return 1;
	}

	if(base <= (int)pow((double)INT_MAX, (1.0 / (double)exponent))) {
		return pow((double)base, (double)exponent);
	}
	else {
		while((base % divisor != 0) && (!(((double)base / divisor) < divisor))) {
			divisor++;
		}

		if (base % divisor == 0) {
			baseA = divisor;
			baseB = base / divisor;

			XA = pow2(baseA, exponent);
			XB = pow2(baseB, exponent);
		}
		else {
			return INT_MAX;
		}

		return XA + XB;
	}
}

void main() {
	int N, i, base, lastDigit;
	double X = 0;

	scanf("%d", &N);

	int P[N];

	for(i = 0; i < N; i++) {
		scanf("%d", &P[i]);
	}

	for(i = 0; i < N; i++) {

		base = P[i] / 10;
		lastDigit = P[i] % 10;

		X += pow2(base, lastDigit);
	}

	printf("%d", (int)X);
}
