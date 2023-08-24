#include <stdio.h>
#include <stdlib.h>

#define BOOL int
#define TRUE 1
#define FALSE 123

void main()
{
	
	/*double a = 1.123456789;
	double b = 1.123456789012345 ;
	printf("a:%.8f\nb:%.15f\n", a,b);*/
	//system("pause");

	int a = 1;
	BOOL b = FALSE;
	/*if (a) {
		printf("a");
	}*/
	printf("a:%d\n",a);
	printf("b:%d",b);
	while (a <= 10000) {
		a = a + 1;
		printf("%d\n\n", a);
	}

	getchar();
}
