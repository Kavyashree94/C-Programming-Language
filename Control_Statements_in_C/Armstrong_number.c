#include<stdio.h>
int main()
{
	int num,sum=0,n,d,cube;
	printf("Enter the number to check if it is armstrong number or not ");
	/*
     eg: 371 -->3^3+7^3+1^3=27+343+1= 371-->this is an armstrong number
     Sum of cubes of digits = the number itself then it is said to be armstrong number
	*/
	scanf("%d",&num);
    n=num;
    sum=0;
    while(n>0)
    {
       d=n%10;
       n=n/10;
       cube=d*d*d;
       sum+=cube;
    }

    if(num==sum)
    {
	   printf("%d is an armstrong number\n",sum);
	}
	else
	{
	   printf("%d is not an armstrong number\n",num);		
	}
	return 1;
}
