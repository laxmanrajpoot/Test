#include <stdio.h>
int main(int argc, char const *argv)
{
	float p,r,t;
	printf("enter principle\n enter rate\nenter time");
	scanf("%f%f%f",&p,&r,&t);
	float f=p*r*(t*12)/100;
	printf("%f\n",f );

	return 0;
}