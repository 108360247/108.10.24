#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1;
	float total, num2, num3, num4, num5;
	num1 = num2 = num3 = num4 = num5 = 0;
	printf("Enter account number:");
	scanf_s("%d", num1);

	while (num1 != -1)
	{
		printf("Enter beginning balance:");
		scanf_s("%f", num2);
		printf("Enter total charges:");
		scanf_s("%f", num3);
		printf("Enter total credits:");
		scanf_s("%f", num4);
		printf("Enter credit limit:");
		scanf_s("%f", num5);
		total = num2 + num3 - num4;
		if (total > num5)
		{
			printf("Account:%d", num1);
			printf("Credit limit:%f", num5);
			printf("Balance:%f", total);
			printf("Credit Limit Exceed.");
		}
		printf("Enter account number:\n");
		scanf_s("%d", num1);
	}
	system("pause");
	return 0;
}