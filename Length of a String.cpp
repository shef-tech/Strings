//Length of a string

#include <stdio.h>
int main()
{
	char *s="welcome";
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	printf("Length is %d",i);
	return 0;
}
