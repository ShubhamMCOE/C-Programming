/*
Basic String Opeartions With Each Function is not dependent on other functions 
1. Accept Strings
2. Display Strings
3. Length Of Strings
4. String Comparison
5. String Concatenation
6. String Lowercase
7. String Uppercase
8. String Copy
9. String Reverse
10. String Palindrome
11. Substring
*/

#include<stdio.h>

int strlen(char str[]) {
	int i = 0;
	while (str[i] != '\0')
		i++;				//Increment till end of string i.e. '\0'
	return i;
}

int strcmp(char str1[], char str2[]) {
	int i = 0;
	while (str1[i] != '\0' || str2[i] != '\0') {
		if (str1[i] != str2[i])
			return 1;				//If Strings Are Not Equal return 1
		i++;
	}
	return 0;						//Else return 0
}

void strcat(char str1[],char str2[]) {
	int i = 0, j = 0;
	while (str1[i] != '\0')
		i++;
	while (str2[j] != '\0') {
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
}

void strlwr(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

void strupr(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
}

void strcpy(char str2[],char str1[]) {	// Copy string1(str1) into string2(str2)
	int i = 0;
	while (str1[i] != '\0') {
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return;
}

void strrev(char str[]) {
	int i = 0,j = 0;
	char temp;
	while (str[j] != '\0')
		j++;
	j--;
	while (i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

int palindrome(char str[]) {
	int i = 0, j = 0;
	while (str[j] != '\0')
		j++;
	j--;
	while (i < j) {
		if (str[i] != str[j])
			return 1;	
		i++;
		j--;
	}
	return 0;
}

int Substring(char str1[], char str2[]) {
	int i = 0, reset, flag = 0, len = 0;
	while (str2[len] != '\0')
		len++;
	while (str1[i] != '\0') {
		reset = i;
		flag = 0;
		if (str1[i] == str2[0]) {
			for (int j = 0; j < len; j++) {
				if (str1[reset] != str2[j]) {
					flag = 1;
					break;
				}
				reset++;
			}
			if (flag == 0)
				return 0;
		}
		i++;
	}
	return 1;
}

int main() {
	char str1[10]="", str2[10]="";
	int op;
	do {
		printf("\n\n\nString Opeartions\n");
		printf("\n1. Enter The String\n2. Display String\n3. Length Of String");
		printf("\n4. String Comparison\n5. String Concatenation\n6. String Lower");
		printf("\n7. String Upper\n8. String Copy\n9. Reverse String\n10. Palindrome\n11. Substring\n12. Exit");
		printf("\nEnter Your Choice = ");
		scanf("%d", &op);
		switch (op) {
		case 1:
			printf("\nEnter String1 = ");
			scanf("%s", str1);
			printf("\nEnter String2 = ");
			scanf("%s", str2);
			break;
		case 2:
			printf("\nString1 = %s", str1);
			printf("\nString2 = %s", str2);
			break;
		case 3:
			printf("\nLength Of '%s' = %d", str1, strlen(str1));
			printf("\nLength Of '%s' = %d", str2, strlen(str2));
			break;
		case 4:
			if (strcmp(str1, str2) == 0)
				printf("\nStrings are Equal");
			else
				printf("\nStrings are not Equal");
			break;
		case 5:
			strcat(str1, str2);
			printf("\nConcatenated String = %s", str1);
			break;
		case 6:
			printf("\nLowercase of '%s' = ", str1);
			strlwr(str1);
			printf("%s", str1);
			printf("\nLowercase of '%s' = ", str2);
			strlwr(str2);
			printf("%s", str2);
			break;
		case 7:
			printf("\nUppercase of '%s' = ", str1);
			strupr(str1);
			printf("%s", str1);
			printf("\nUppercase of '%s' = ", str2);
			strupr(str2);
			printf("%s", str2);
			break;
		case 8:
			strcpy(str2, str1);
			printf("\nCopied String = %s", str2);
			break;
		case 9:
			printf("\nReverse of '%s' = ",str1);
			strrev(str1);
			printf("%s", str1);
			printf("\nReverse of '%s' = ", str2);
			strrev(str2);
			printf("%s", str2);
			break;
		case 10:
			if (palindrome(str1) == 0)
				printf("\nString '%s' Is Palindrome",str1);
			else
				printf("\nString '%s' Is Not A Palindrome", str1);
			if (palindrome(str2) == 0)
				printf("\nString '%s' Is Palindrome", str2);
			else
				printf("\nString '%s' Is Not A Palindrome", str2);
			break;
		case 11:
			if (Substring(str1,str2) == 0)
				printf("\nSubstring '%s' Exists in String '%s'",str1,str2);
			else
				printf("\nSubstring '%s' Does Not Exist in String '%s'", str1, str2);
			break;
		case 12:
			printf("\nYou Have Terminated The Program");
			break;
		default:
			printf("\nYou Have Entered The Wrong Choice\nPlease Try Again\n");
		}
	} while (op != 12);
	return 0;
}