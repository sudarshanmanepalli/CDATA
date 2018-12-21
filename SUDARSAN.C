#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n,s,rev=0;
	clrscr();
	printf("enter value for n:");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
	s=n%10;
	n=n/10;
	rev=(rev*10)+s;
	}
	printf("%d",rev);
	if(n1==rev)
	{
	printf("it is palindrome:");
	}
	else
	{
	printf("it is not a palindrome:");
	}
	getch();
}