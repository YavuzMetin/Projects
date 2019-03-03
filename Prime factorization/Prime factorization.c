#include <stdio.h>

int main ()
{
	int number, counter, power;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	if( number>32676 || number<-32676 )
	{
		for(;number>32676 || number<-32676;)
		{
			printf("Enter a valid number: ");
			scanf("%d", &number);
		}
	}
	
	counter = 2;
	power = 0;
	
	printf("Prime factorization of %d: ",number);
	
	while( number!=1 )
	{	
		if( number%counter == 0 )
		{
			number = number / counter;
			power = power + 1;
			
			if( number%counter!=0 )
			{
				printf("%d^%d", counter, power);
				if( number!=1)
				{
				printf("*");
				}
			}				
		}
		else
		{
			counter = counter + 1;
			power = 0;
		}		
	}	
		
	return 0;
}
