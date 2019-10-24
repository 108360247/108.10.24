#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float num1, bonus;
	printf("Enter sales in dollars(-1 to end):");
	scanf_s("%f",&num1);
	
	while (num1 != -1)
	{
		
		bonus = (num1) * (0.09)+200;
		printf("salary is:%f\n",bonus);
		
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f",&num1);
	}
	system("pause");
	return 0;
}