#include<stdio.h>

union var 
{
	int a;
	char b;	
};


int main()
{
	union var v1;

	v1.a = 90;

	printf("Value of 'b': %c\n", v1.b );

	return 0;
}



//	ACCESS UNION MEMBERS USING (.) DOT OPERATOR