#include<stdio.h>

int Armstrong(int num) {
	int n1, ans = 0, temp = num;
	while (temp > 0) {
		n1 = temp % 10;
		ans += n1*n1*n1;
		temp = temp / 10;
	}
	if (ans == num)
		return 0;
	return 1;
}

int main() {
	int num;
	printf("\nEnter The Number = ");
	scanf("%d", &num);
	if (Armstrong(num) == 0)
		printf("\nThe Number %d is an Armstrong Number", num);
	else
		printf("\nThe Number %d is NOT an Armstrong Number", num);
	return 0;
}