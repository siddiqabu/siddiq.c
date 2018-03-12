#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
}
