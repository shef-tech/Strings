//Converting upper to lower and lower to upper

#include <stdio.h>
int main()
{
	char A[]="weLCome";
	int i;
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]>='A' && A[i]<='Z')
			A[i]+=32;
		else if(A[i]>='a' && A[i]<='z')
			A[i]-=32;
	}
	printf("%s",A);
}
