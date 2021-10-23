#include<stdio.h>
int main()
{
	int n,r,sum=0,temp,rev=0;
	printf("enter any positive integer:\n");
	scanf("%d",&n);
	printf("\nthe given number is:%d",n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=r+sum;
		rev=(rev*10)+r;
		n=n/10;
	}
	printf("\n the sum of individual digits of a given positive number is:%d\n",sum);
	if(temp==rev)
	printf("\nthe given integer %d is palindrome:\n",temp);
	else
	printf("\nthe given integer %d is not palindrome:\n",temp);
}
