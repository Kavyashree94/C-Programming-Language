#include<stdio.h>
int main()
{
	int n;
	long fact=1;

	printf("Enter the number to find the factorial of it(without recursion :)) ");
	scanf("%d",&n);
	/*printf("%d",n);*/
	while(n>1)
	{
       fact*=n;
       n--;
	}

	printf("Factorial is %ld",fact);
    return 0;

}