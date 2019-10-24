#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hour;
	float rate, salary;

	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%d",&hour);

	while (hour != -1)
	{
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &rate);
		salary = hour * rate;
		printf("the salary is :%f\n", salary); 
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &hour);

	}
	system("pause");
	return 0;
}