#include <stdio.h>

int main()
{
	char ch;
	int i;
	int sum=0;
	int c_a=0, c_t=0, c_c=0, c_g=0;
	
	printf("Enter a seq.: ");
	
	for(i=0; i<=25; i++)
	{
		ch=getchar();
		
		if(i==0)
		{
			printf("DNA seq.:     ");
		}
		
		if(ch=='x' || ch=='X') 
		{
			printf("\nTerminated!");
			ch='X';
			break;
		}
		
		if(ch=='a' || ch=='t' || ch=='c' || ch=='g' || ch=='A' || ch=='T' || ch=='C' || ch=='G')
		{
			if(ch=='a' || ch=='A')
			{
				ch='A';
				if(c_a >= c_t+1)
				{
					continue;
				}
				c_a++;
			}
			else if(ch=='t' || ch=='T')
			{
				ch='T';
				if(c_t >= c_a+1)
				{
					continue;
				}
				c_t++;
			}
			else if(ch=='c' || ch=='C')
			{
				ch='C';
				if(c_c >= c_g+1)
				{
					continue;
				}
				c_c++;
			}
			else if(ch=='g' || ch=='G')
			{
				ch='G';
				if(c_g >= c_c+1)
				{
					continue;
				}
				c_g++;
			}			
			
			sum=c_a+c_t+c_c+c_g;
			
			printf("%c", ch);
		}
		
		if(sum==10)
		{
			break;
		}
		
		if(ch=='\n')
		{
			break;
		}
	
	}
	
	if(ch!='X')
	{
		if(c_a==0 && c_t==0 && c_c==0 && c_g==0) 	
		{
			printf("\nNo data to test!\n");
		}
		else if(c_a>c_t && c_c==c_g)
		{
			printf("\nDisease: A nucleotide.\n");
		}
		else if(c_a<c_t && c_c==c_g)
		{
			printf("\nDisease: T nucleotide.\n");
		}
		else if(c_a==c_t && c_c>c_g)
		{
			printf("\nDisease: C nucleotide.\n");
		}
		else if(c_a==c_t && c_c<c_g)
		{
			printf("\nDisease: G nucleotide.\n");
		}
		else if(c_a>c_t && c_c>c_g)
		{
			printf("\nDisease: A and C nucleotides.\n");
		}
		else if(c_a>c_t && c_c<c_g)
		{
			printf("\nDisease: A and G nucleotides.\n");
		}
		else if(c_a<c_t && c_c>c_g)
		{
			printf("\nDisease: T and C nucleotides.\n");
		}
		else if(c_a<c_t && c_c<c_g)
		{
			printf("\nDisease: T and G nucleotides.\n");
		}
		else if(c_a==c_t && c_c==c_g)
		{
			printf("\nHealthy!\n");
		}
	}
	
	return 0;
}
