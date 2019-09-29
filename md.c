#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[10][10][10],count=0;
	printf("enter elements\n");
	scanf("%d",&count);
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			for (int k = 0; k < count; ++k)
			{
			scanf("%d",&a[i][j][k]);	

			}
		}
	}
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			for (int k = 0; k < count; ++k)
			{
			printf("%d\t",a[i][j][k] );

			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}