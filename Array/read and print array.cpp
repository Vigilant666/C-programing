#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	printf("%d ", a[i]);
	
}
