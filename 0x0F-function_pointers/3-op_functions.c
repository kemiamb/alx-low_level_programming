#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int op_add(int a, int b)
{
	int sum = atoi(a) + atoi(b);


	printf("%d\n", sum);
	return (sum);
}
int op_sub(int a. int b)
{
	int sub = atoi(a) - atoi(b);

	
	printf("%d\n", sub);
	return (sub);
}
int op_mul(int a, int b)
{
	int times = atoi(a) * atoi(b);


	printf("%d\n", times);
	return (times);
}
int op_div(int a, int b)
{
	int div = atoi(a) / atoi(b);


	printf("%d\n", div);
	return (div);
}
int op_mod(int a, int b)
{
	int rem = atoi(a) % atoi(b);

	printf("%d\n", rem);
	return (rem);
}
