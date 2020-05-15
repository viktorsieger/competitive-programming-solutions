#include<stdio.h>

void main() {
	int T, i, k;
	double n;

	scanf("%d", &T);

	for(i = 0; i < T; i++) {
		
		n = 0;

		scanf("%d", &k);

		while(k != 0) {
			n += 0.5;
			n *= 2;
			k--;
		}

		printf("%d\n", (int)n);
	}
}
