#include<stdio.h>
#include<stdlib.h>

int Header_3()
{
	int num3;
	float num4;

	printf("Your gross weekly sales:");
	scanf_s("%d",&num3);
	num4 = num3 * 0.057 + 250;
	printf("Your salary is:%f\n", num4);
	return 0;
}