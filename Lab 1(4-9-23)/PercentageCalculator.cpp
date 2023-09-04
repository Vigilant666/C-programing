#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,h;
	printf("Enter the marks obtained in 5 different subjects");
	scanf("%d %d %d %d %d" ,&a,&b,&c,&d,&e);
	f=a+b+c+d+e;
	h=f*100/500;
	printf("The percentage obtained is %d",h);
	return 0;
}
