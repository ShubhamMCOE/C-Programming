#include<stdio.h>

int Prime(int num) {
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}

int main() {
	int num;
	printf("\nEnter The UpperBound = ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (Prime(i) == 1)
			printf("\nThe Number %d is an Prime Number", i);
	}
	return 0;
}