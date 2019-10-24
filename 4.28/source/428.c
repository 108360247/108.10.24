#include<stdio.h>
#include<stdlib.h>
#include"Header.h"

int main(void)
{
	int a;
	printf("mananger is '1'; hourly worker is'2';commission is'3';piecework is'4'\n");
	printf("Please Input number:");
	scanf_s("%d",&a);
	while (a != -1)
	{
		switch (a)
		{
		case 1:
			Header_1();
			break;
		case 2:
			Header_2();
			break;
		case 3:
			Header_3();
			break;
		case 4:
			Header_4();
			break;
		}
		printf("mananger is '1'; hourly worker is'2';commission is'3';piecework is'4'\n");
		printf("Please Input number:");
		scanf_s("%d", &a);
	}
		
	
}