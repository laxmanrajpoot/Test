#include <stdio.h>
int main(int argc, char const *argv[])
{
	//f=1.8*c+32
	float c;
	printf("enter value in celsius\n");
	scanf("%f",&c);
	float f=1.8*c+32;
	printf("%.2f farenheit\n",c,f);

	
}