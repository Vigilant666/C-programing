#include <stdio.h>
int main()
{
	int a,b,t;
	printf ("Enter the numerical values");
	scanf ("%d %d" ,&a , &b);
	t=a;
	a=b;
	b=t;
	printf("The swapped numbers are %d %d",a,b);
	return 0;
	
}
