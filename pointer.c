#include<stdio.h>
int main()
{
	int *p,a=10;
	p=&a;
	printf("%d\n",p );
	printf("%u\n",p );
	printf("%p\n",p );
	return 0;
}