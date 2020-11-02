#include<stdio.h>

void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter Swapping Without Pointres = ");
	printf("\na = %d\nb = %d", a, b);
}

void pswap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 10, b = 20;
	printf("\nBefore Swapping = ");
	printf("\na = %d\nb = %d", a, b);
	swap(a, b);
	printf("\n\nBefore Swapping = ");
	printf("\na = %d\nb = %d", a, b);
	pswap(&a, &b);
	printf("\nAfter Swapping Wit Pointres = ");
	printf("\na = %d\nb = %d", a, b);
	return 0;
}