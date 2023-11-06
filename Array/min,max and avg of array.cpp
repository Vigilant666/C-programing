#include <stdio.h>
int main()
{
	int n;
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
	
	int j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	int k,l,m,avg;
	k=a[1];
	l=a[n];
	m=0;
	printf("The minimum number is %d",k);
	printf("\n");
	printf("The maximum number is %d",l);
	printf("\n");
	for(i=0;i<n;i++)
	{
		m+=a[i];
		avg=m/n;
	}
	printf("The average of the numbers is %d",avg);
	
}
