//Validate a string(to check if the string is valid or not)

#include <stdio.h>
int Validate(char *name)
{
	int i;
	for(i=0;name[i]!='\0';i++)
	{
		if(!(name[i]>='A' && name[i]<'Z') && !(name[i]>='a' && name[i]<='z') && !(name[i]>=48 && name[i]<=57))
			return 0;
	}
return 1;
}
int main()
{
	char *name="Aiya@ry";
	if(Validate(name))
	{
		printf("Valid String");
	}
	else
	{
		printf("Invalid String");
	}
}

