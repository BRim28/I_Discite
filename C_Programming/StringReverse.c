#include<stdio.h>
void reverse(char str2[])
{
	
	int l,i;
	i=0;
	l=0;
	while(str2[i])
	{
		++l;
		i++;
	}
	char strrev[l-1];
	i=0;
	
	while(i<l)
	{
		strrev[i]=str2[l-i-1];
		++i;
	}
	printf("Reverse string:\n");
	printf("%s\n",strrev);
}
int main()
{
	char str[100];
	scanf("%s",str);
	reverse(str);
}
