#include <stdio.h>

float bisection(float a, float b);
float equation(float x);
void findRoots( void );

int d, e, f;
float i;
float p;
float m, n;

int main()
{
	scanf("%d%d%d%f%f", &d, &e, &f, &m, &n);
	
	printf("Entered equation: %dx^2 + %dx + %d", d, e, f);
	printf("\nDomain: %.0f, %.0f", m, n);
	
	findRoots();
	
	return 0;
}

float equation(float x)
{
	return d*x*x + e*x + f;
}

float bisection(float a, float b)
{	
	p = (a+b)/2;
	
	if(equation(a)*equation(p)>0)
	{
		a = p;
	}
	else if(equation(b)*equation(p)>0)
	{
		b = p;
	}
	
	if(equation(p)<0.001 && equation(p)>-0.001)
	{
		return p;
	}
	else
	{
		bisection(a, b);
	}
}

void findRoots( void )
{
	float r1, r2;
	
	
		if(d==0)
		{
			r1 = bisection(m, n);
			
			printf("\nRoot: x=%.3f", r1);
		}
		else if(e*e-(4*d*f)>0)
		{	
			i = -e/d;
				
			r1 = bisection(i, m);
			r2 = bisection(i, n);
	
			printf("\nRoots: x=%.3f, x=%.3f", r1, r2);
		}
		else
		{
			printf("\nNo roots found.");
		}
	
}
