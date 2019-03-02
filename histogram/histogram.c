#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void mid_rng(long long*number);

void lsd_rng(long long *number);

 
int main()
{
	int algorithm, number, num_samples, i;
	long long seed;
	
	printf("Which PRNG Algorithm?\n");
	printf("1. MID-PRNG\n");
	printf("2. LSD-PRNG\n");
	scanf("%d", &algorithm);
	
	printf("Enter the seed\n");
	scanf("%d", &seed);
	
	printf("Enter Number of Samples\n");
	scanf("%d", &num_samples);

	if(algorithm == 1)
	{
		long long sayi;
		sayi = &seed;
		for(i = 0; i < num_samples; i++)
		{
			mid_rng(sayi);
		}
	}
	else if(algorithm == 2)
	{
		long long sayi;
		sayi = &seed;
		if(sayi % 2 != 0 && sayi % 5 != 0 && sayi >= 10000)
		{
			for(i = 0; i < num_samples; i++)
			{
				lsd_rng(sayi);
			}
		}
		else
		{
			printf("You have entered wrong number");
		}
	}
	else
	{
		printf("You have entered wrong number");
	}

	return 0;
}

void mid_rng(long long *number){
		*number = *number * *number;
		if(*number >= 1000000000)
		{
			*number = *number/10;
		}
		*number = (*number/100) % 100000;
		printf("%lld\n",*number);	
}

void lsd_rng(long long *number){
		*number = *number * 73;
		*number = *number % 100000;
		printf("%lld\n",*number);
}
