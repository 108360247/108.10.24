#include<stdio.h>
#include<stdlib.h>

int Header_2()
{
	int num1,num2;
			
	printf("How much do you time-and-a-half?($150*1.5)");
	scanf_s("%d", &num1);
	num2 = num1 * 150 * 1.5 + 40 * 150;
	printf("Your salary is : %d\n", num2);
}