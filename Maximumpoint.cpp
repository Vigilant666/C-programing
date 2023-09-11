#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three values");
	scanf("%d %d %d" ,&a,&b,&c);
	if(a==b && b==c && c==a)
 	printf("All are equally effective");
	else if(a>b & a>c)
	printf("a is best effective");
 	else if (b>c)
 	printf("b is best effective");
 	else
 	printf("c is best effective");
 	return 0;
	
}
