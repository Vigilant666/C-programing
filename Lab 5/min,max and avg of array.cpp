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
	
	int p=a[0];
	int q=a[0];
	int s;
	for(i=0;i<n;i++)
	{
		if(q>a[i])
		{
			q=a[i];
		}
		
		if(p<a[i])
		{
			p=a[i];
		}
	s+=a[i];
}
printf("The maximum is %d\n",p);
printf("The minimum is %d\n",q);

float avg;
avg=s/n;
printf("The average is %f\n",avg);
}
	 
