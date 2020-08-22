#include <stdio.h>
void IO_INPUT()
{
	int a, b;
	float c, d;
	char e[10] = "Cosmology";

	//Input data 
	printf("Enter 2  Input as 6 ,394:\n");
	printf("Actual Input:\n");
	scanf_s("%d%d", &a, &b);
	printf("Format Integer Output: Input as %%d %%d\n");
	printf("%d %d\n", a, b);
	printf("==============================================\n");
	//Input data length is <= given field width.Input value remains unaltered
	printf("Enter 2  Input as 6 ,394:\n");
	printf("Actual Input:\n");
	scanf_s("%2d %3d", &a, &b);
	printf("Format Integer Output: Input as %%2d %%3d\n");
	printf("%d %d\n", a, b);
	printf("==============================================\n");
	//Input data length is > given field width.Input value remains unaltered

	printf("Enter 2  Input as 269 ,3845:\n");
	printf("Actual Input:\n");
	scanf_s("%2d %3d", &a, &b);
	printf("Format Integer Output: Input as %%2d %%3d\n");
	printf("%d %d\n", a, b);
	printf("==============================================\n");

	printf("Enter 2  Input as 269 ,3845:\n");
	printf("Actual Input:\n");
	scanf_s("%5d %3d", &a, &b);
	printf("Format Integer Output: Input as %%2d %%3d\n");
	printf("%d %d\n", a, b);
	printf("==============================================\n");

	printf("Enter 2  Input as 5 ,5.92:\n");
	printf("Actual Input:\n");
	scanf_s("%f %f", &c, &d);
	printf("Format Float Output: Input as %%f %%f\n");
	printf("%f %f\n", c, d);
	printf("==============================================\n");


	//Input data length is <= given field width.Input value remains unaltered
	printf("Enter 2  Input as 5 ,5.92:\n");
	printf("Actual Input:\n");
	scanf_s("%3f %4f", &c, &d);
	printf("Format Float output,Input as  %%3f %%4f\n");
	printf("%f %f\n", c, d);
	printf("==============================================\n");

	//Input data length is > given field width.Input value remains unaltered
	printf("Enter 2  Input as 5.93 ,65.875:\n");
	printf("Actual Input:\n");
	scanf_s("%3f %4f", &c, &d);
	printf("Format Float output,Input as  %%3f %%4f\n");
	printf("%f %f\n", c, d);
	printf("==============================================\n");


	printf("Enter 2  Input as 5.93 ,65.875:\n");
	printf("Actual Input:\n");
	scanf_s("%6f %4f", &c, &d);
	printf("Format Float output,Input as  %%3f %%4f\n");
	printf("%f %f\n", c, d);
	printf("==============================================\n");
	//
	///*
	//%ws
	//w= Total number of characters that will be stored in string
	//*/
	printf("Actual String:\n");
	printf("%s\n", e);
	printf("Enter  String as Cosmology:\n");
	scanf_s("%5s\n", e, 10);
	printf("Print  String: %%5s\n");
	printf("%s\n", e);
	printf("==============================================\n");
}