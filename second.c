#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a[100],max,min,n,l;
	printf("enter no of elements\n");
	scanf("%d",&n);
	for (int i = 0; i <n; ++i)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i <n; i++)
	{
		min=a[0];

		if(a[i]<min)
		{
			max=min;
			min=a[i];
			
		}
		else if(a[i]>max && a[i]>min)
		{ 
			l=a[i];
		}
	
	}
	printf("second largest%d\n",max);
	printf("largest%d\n",l);
	return 0;
}