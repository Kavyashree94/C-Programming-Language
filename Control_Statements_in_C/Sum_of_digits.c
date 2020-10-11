#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("Enter the number for which sum of digits will be calculated");
	scanf("%d",&n);
	for(;n>0;n/=10)
	{
		rem=n%10;
		sum+=rem;
	}
	printf("%d",sum);
	return 1;
}



