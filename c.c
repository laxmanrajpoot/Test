#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n,sum=0,k=0,l=1;
	printf("enter\n");
	scanf("%d",&n);
for(int i=0;i<n;i++)
{
sum=k+l;

printf("%d ",sum );
k=l;
l=sum;

}
	return 0;
}