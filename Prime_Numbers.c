#include<stdio.h>

int Prime(int num) {
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}

int main() {
	int num;
	printf("\nEnter The Number = ");
	scanf("%d", &num);
	if (Prime(num) == 1)
		printf("\nThe Number %d is an Prime Number", num);
	else
		printf("\nThe Number %d is NOT a Prime Number", num);
	return 0;
}