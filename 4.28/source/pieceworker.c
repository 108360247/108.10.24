#include<stdio.h>
#include<stdlib.h>

int Header_4()
{
	int num5,num6;
	printf("How do you recieve the fixed amount of money: ");
	scanf_s("%d", &num5);
	num6 = num5 * 0.2;
	printf("Your salary is:%d\n", num6);
	return 0;
}