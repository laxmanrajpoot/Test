#include<stdio.h>
struct a
{
	int data;
	struct a *next;
}start=NULL;
void create()
{
	int d;
	struct a *ptr,*c;
	printf("Enter data");
	scanf("%d",&d);
	ptr=(struct a*)malloc(sizeof(struct a*));
	ptr->data=d;
	if(start==NULL)
	{
		start=ptr;
		ptr->next=NULL;

	}
	else
	{
c=ptr;
	}
	while(c->next!=NULL)
	{
		c=c->next;
		c->next=ptr;
		ptr->next=NULL;
	}
	c=start;
	while(c->next!=NULL)
	{

		printf("%d",c->data);
		c=c->next;
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	create();
	return 0;
}