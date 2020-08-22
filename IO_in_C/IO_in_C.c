#include <stdio.h>
#include "IO_in_C.h"    /* Always include the header file that declares something
					 * in the C file that defines it. This makes sure that the
					 * declaration and definition are always in-sync.  Put this
					 * header first in foo.c to ensure the header is self-contained.
					 */
void main()
{
	int a, b;
	double c, d;
	char e[10] = "Cosmology";
	//char g[15];
	a = 6;
	b = 394;
	//Input data length is <= given field width.Input value remains unaltered
	printf("Actual Input:\n");
	printf("%d %d\n", a, b);
	//Input data length is > given field width.Input value are altered and stored
	printf("Format Integer Input: %%2d %%3d\n");
	printf("%2d %3d\n", a, b);
	printf("==============================================\n");
	//Input data length is < given field width.Input value remains unaltered
	a = 78;
	b = 9;
	printf("Actual Input:\n");
	printf("%d %d\n", a, b);
	printf("Format Integer Input: %%3d %%4d\n");
	printf("%3d %4d\n", a, b);
	printf("==============================================\n");
	//Input data length is = given field width.Input value remains unaltered
	a = 263;
	b = 1941;
	printf("Actual Input:\n");
	printf("%d %d\n", a, b);
	printf("Format Integer Input: %%3d %%4d\n");
	printf("%3d %4d\n", a, b);
	printf("==============================================\n");
	//Input data length is > given field width.Input value remains unaltered
	a = 2691;
	b = 19412;
	printf("Actual Input:\n");
	printf("%d %d\n", a, b);
	printf("Format Integer Input: %%3d %%4d\n");
	printf("%3d %4d\n", a, b);
	printf("==============================================\n");
	//case...
	a = 263;
	b = 1941;
	printf("Actual Input:\n");
	printf("%d %d\n", a, b);
	printf("Format Integer Input: %%2d %%3d\n");
	printf("%2d %3d\n", a, b);
	printf("==============================================\n");

	c = 5;
	d = 5.92;
	//Input data length is <= given field width.Input value remains unaltered
	printf("Actual Input:\n");
	printf("%f %f\n", c, d);
	printf("Format Float Input: %%3f %%4f\n");
	printf("%3f %4f\n", c, d);
	printf("==============================================\n");
	c = 5.93;
	d = 65.875;
	//Input data length is > given field width.Input value remains unaltered
	printf("Actual Input:\n");
	printf("%f %f\n", c, d);
	printf("Format Float Input: %%3f %%4f\n");
	printf("%3f %4f\n", c, d);
	printf("==============================================\n");
	/*
	%w.nf
	i) Length is <w then value is right justified with leading blanks
	ii) No of digits after decimal >n ,the digits are rounded off
	*/
	c = 8;
	d = 5.9;
	printf("Actual Input:\n");
	printf("%f %f\n", c, d);
	printf("Format Float Input: %%4.1f %%7.2f\n");
	printf("%4.1f %7.2f\n", c, d);
	printf("==============================================\n");
	c = 25.3;
	d = 1635.92;
	printf("Actual Input:\n");
	printf("%f %f\n", c, d);
	printf("Format Float Input: %%4.1f %%7.2f\n");
	printf("%4.1f %7.2f\n", c, d);
	printf("==============================================\n");
	c = 15.231;
	d = 65.875948;
	printf("Actual Input:\n");
	printf("%f %f\n", c, d);
	printf("Format Float Input: %%4.1f %%7.2f\n");
	printf("%4.1f %7.2f\n", c,d);
	printf("==============================================\n");
	/*
	%ws
	w= Total number of characters that will be stored in string

	%w.n s
	w=Specified field width
	n= first n characters will be displayed
	(w-n) = leading blanks displayed before string
	*/
	printf("Actual String:\n");
	printf("%s\n", e);
	printf("Formated String: %%5s\n");
	printf("%5s\n", e);
	printf("==============================================\n");
	printf("Formated String: %%15s\n");
	printf("%15s\n", e);
	printf("==============================================\n");
	printf("Formated String: %%.5s\n");
	printf("%.5s\n", e);
	printf("==============================================\n");
	printf("Formated String: %%10.5s\n");
	//10-5=5 leading blanks
	printf("%10.5s\n", e);
	printf("==============================================\n");
	IO_INPUT();
}