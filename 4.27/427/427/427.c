#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void)
{
	float z;
	int z1,x, y;
	x = y = 0;
	
	for (x = 1; x <500; x++)
	{
		for (y = 1; (y <500)&&(x>y); y++)
		{	z = x * x + y * y;
			z = sqrt(z);
			z1 = x * x + y * y;
			z1 = sqrt(z1);
			if (z<500)
			{
				if (z == z1)
				{
					printf("x=%d,y=%d,z=%d\n",x,y,z1);
				}
				
			}
		}
		
	}


	return 0;
}
