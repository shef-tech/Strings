//Counting Vowels and Consonents

#include <stdio.h>
int main()
{
	char A[]="How are you";
	int i,vcount=0,ccount=0;
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]=='A'|| A[i]=='E' || A[i]=='I'|| A[i]=='O' || A[i]=='U'|| A[i]=='a' ||A[i]=='e'|| A[i]=='i' ||A[i]=='o'|| A[i]=='u')
			vcount++;
		else if((A[i]>='A' && A[i]<='Z') || (A[i]>='a' && A[i]<='z') )
			ccount++;
	}
	printf("Number of vowels are %d\n",vcount);
	printf("Number of consonants are %d",ccount);
}
