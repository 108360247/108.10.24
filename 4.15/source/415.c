#include <stdio.h>
#include <stdlib.h>

int main()
{
	float i, j, k,principal; 
	principal = 5000.00;
	for (j = 10.0; j <= 12.0; j = j+ 0.5)
	{
		for (k = 0; k < 15; k++)
		{
			principal = principal + principal * j*0.01;
		}
		printf("本金 $5000 ，年利率%.1f%%，經過15年，總金額為$%.2f\n",j,principal );
		principal = 5000.00;
	}
		
		
}