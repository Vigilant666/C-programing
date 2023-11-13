#include <stdio.h>
int main()
{
	char s1[100];
	int i;
	int j;
	char t;
	printf("Enter a string:");
	scanf("%[^\n]",s1);
	
	while (s1[i] != '\0')
	{ 
		i++;
	}
	
	for(j=0;j<i/2;j++)
	{
		t=s1[j];
		s1[j]=s1[i-j-1];
		s1[i-j-1]=t;
	}
	
	printf("The new string is: %s",s1);
	return 0;
}
	
	
	
