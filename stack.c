#include <stdio.h>
int a[100],n,top;
void push();
void pop();
int main(int argc, char const *argv[])
{
	
	printf("enter choicevalues\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=n;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	push();
	pop();
	
	return 0;
}
void push()
{
	if(!(top==n))
	{
	int item;
	scanf("%d",&item);
	top++;
	a[top]=item;
	printf("%d\n",a[top] );
}
else
{
	printf("overflow\n");
}

}
void pop()
{

	if(!(!top))
	{
		int c=a[top];
		top--;
		printf("%d\n",a[top] );
		printf("deleted item=%d\n",c );
	}
	else
		printf("underflow\n");
}
