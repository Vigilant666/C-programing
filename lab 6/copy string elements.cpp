#include <stdio.h>
int main()
{
	char s1[100];
	printf("Enter a string: ");
	scanf("%[^\n]",s1);
	
	char s2[100];
	int i=0;
	
	while (s1[i] !='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	
	printf("%s",s2);
	return 0;
}
