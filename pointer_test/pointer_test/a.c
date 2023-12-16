#include <stdio.h>

int main() {
	int var = 100;
	int *pointer = var;
	printf("%p\n",pointer);
	printf("%d\n",*pointer);
	pointer++;
	printf("%p\n", pointer);
	//printf("%d\n", *pointer);
	return 0;
}