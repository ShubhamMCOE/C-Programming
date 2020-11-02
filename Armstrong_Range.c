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
	printf("\nEnter The UpperBound Range = ");
	scanf("%d", &num);
	for (int i = 0; i <= num; i++)
		if (Armstrong(i) == 0)
			printf("\nThe Number %d is an Armstrong Number", i);
	return 0;
}