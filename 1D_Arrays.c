#include<stdio.h>

void Accept(int a[],int n) {
	for (int i = 0; i < n; i++) {
		printf("\nEnter Element a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("\nArray Creation Successful................\nInsertion Successful..............");
}

void Display(int a[], int n) {
	for (int i = 0; i < n; i++)
		printf("\t%d", a[i]);
}

int Search(int a[], int n, int key) {
	for (int i = 0; i < n; i++) {
		if (a[i] == key)
			return i;
	}
	return 0;
}

void Update(int a[], int n,int key) {
	for (int i = 0; i < n; i++) {
		if (a[i] == key) {
			printf("\nEnter The Element To Update = ");
			scanf("%d", &a[i]);
			printf("\nUpdation Successful................");
			return;
		}
	}
	printf("\nElement Not Found\nUpdation Unsuccessful.......................");
}

int Delete(int a[], int n, int key) {
	for (int i = 0; i < n; i++) {
		if (a[i] == key) {
			for (int j = i; j < n; j++) {
				a[j] = a[j+1];
			}
			return n-1;
		}
	}
	return 0;
}

int main() {
	int a[10], op, n=0,key;
	do {
		printf("\n\nArray Operations\n");
		printf("\n1. Accept Array\n2. Display Array");
		printf("\n3. Search\n4. Update\n5. Delete\n6. Exit\n");
		printf("\nEnter Your Choice = ");
		scanf("%d", &op);
		switch (op) {
		case 1:
			printf("\nEnter Number Of Elements You Want To Enter = ");
			scanf("%d", &n);
			Accept(a, n);
			break;
		case 2:
			printf("\nArray Elements Are = ");
			Display(a, n);
			break;
		case 3:
			printf("\nEnter The Element You Want To Search = ");
			scanf("%d", &key);
			if (Search(a, n, key) == 0)
				printf("\nElement Not Found\nPlease Try Again\n");
			else
				printf("\nElement %d found at %d", key, Search(a, n, key));
			break;
		case 4:
			printf("\nEnter The Element You Want To Modify = ");
			scanf("%d", &key);
			Update(a, n, key);
			break;
		case 5:
			printf("\nEnter The Element You Want To Delete = ");
			scanf("%d", &key);
			if (Delete(a, n, key) == 0)
				printf("\nElement Not Found.............\nDeletion Unsuccessful...............");
			else
				n = Delete(a, n, key);
			break;
		case 6:
			printf("\nYou Have Terminated The Program\n");
			break;
		default:
			printf("\nYou Have Entered The Wrong Choice\nPlease Try Again\n");
		}
	} while (op != 6);
	return 0;
}