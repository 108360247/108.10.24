#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	int day;
	float loan,rate,interest;

	printf("Enter loan principal(-1 to end):");
	scanf_s("%f",&loan);
	
	while (loan != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%f",&rate);
		printf("Enter term of the loan in days:");
		scanf_s("%d",&day);
		interest = loan * rate * day / 365;
		printf("the charge interest is %f\n", interest);
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &loan);
	}
	system("pause");
	return 0;

}