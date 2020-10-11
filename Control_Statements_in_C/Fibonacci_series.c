#include<stdio.h>
int main()
{
int x=0,y=1,i,z=0,n;
printf("Enter the number of fibonacci numbers to be printed:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	z=x+y;
	printf("%d",x);
	x=y;
	y=z;
}
return 0;
}
