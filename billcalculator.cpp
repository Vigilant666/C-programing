#include<stdio.h>
int main()
{
	int u;
	int h;
	int i;
	printf("Enter the no of units used");
	scanf("%d",&u);
	h=u*2;
	i=u*10;
	if(u>0 && u<100)
	printf("%d",&h);
	else if(u>100)
    printf("%d",&i);
	return 0;
}
