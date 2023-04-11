//Counting words

#include <stdio.h>
int main()
{
	char A[]="How are you";
	int i,count=0;
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]==' ' && A[i-1]!=' ')
			count++;
	}
	printf("The total number of words are %d",count+1);
	return 0;
}
