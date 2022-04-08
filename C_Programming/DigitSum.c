#include<stdio.h>
int DigitAdd(int n)
{
	if(n<10)
		return n;
	int addition;
	return addition=(n%10)+DigitAdd(n/10);
}
int main()
{
	int n,ans;
	printf("Enter a number:\n");
	scanf("%d",&n);
	ans=n;
	while(ans>=10)
	{
		ans=DigitAdd(ans);
	}
	printf("%d",ans);
}
