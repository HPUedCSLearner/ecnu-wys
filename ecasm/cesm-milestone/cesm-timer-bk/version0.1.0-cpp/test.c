#include <stdio.h>

int do_multi(int a, int b)
{
	return a * b;
}
 
 
int do_calc(int a, int b)
{
	return do_multi(a, b);
}
 
 
int main()
{
	int a = 4, b = 5;
	printf("result: %d\n", do_calc(a, b));
    do_multi(1,3);
    do_multi(2,3);
	return 0;
}
