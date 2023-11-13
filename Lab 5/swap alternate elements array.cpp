#include <stdio.h>
int main()
{   int t;
	int n;
	if(n%2==0)
	{
	printf("Enter the value of n");
	printf("\n");
	scanf("%d",&n);
	int a[n];
	int i;
	printf("Enter the array values");
	printf("\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The given array is ");
	for(i=0;i<n;i++)
	printf("%d ", a[i]);
	printf("\n");
	
	for(i=0;i<n;i+2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	printf("The new array is ");
	for(i=0;i<n;i++)
	printf("%d ", a[i]);
    }
    
    else
    printf("Enter an even number");
}
	
