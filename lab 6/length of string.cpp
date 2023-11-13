#include <stdio.h>
int main()
{
	char s1[100];
	int i;
	printf("Enter a string:");
	scanf("%[^\n]",s1);
	
	while (s1[i] != '\0')
	{
		i++;
	}
	
	printf("The length of the string is: %d",i);
	return 0;
}
