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
		printf("���� $5000 �A�~�Q�v%.1f%%�A�g�L15�~�A�`���B��$%.2f\n",j,principal );
		principal = 5000.00;
	}
		
		
}