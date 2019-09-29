#include <stdio.h>
#include <stdlib.h>
struct n
{
	int data;
	struct n *next;
}*start=NULL;
int main(int argc, char const *argv[])
{
	struct n *new,*c,*ptr;
	int i,n;
	printf("enter no of nodes\n" );
	scanf("%d",n);
	for(i=0;i<n;i++)
	{
		new=(struct n*)malloc(sizeof(struct n*));
		printf("enter\n");
		scanf("%d",new->data);
		new->next=NULL;
		if(start==NULL)
		{
			start=new;
			c=new;
		}
		else
		{
			c->next=new;
			c=new;
		}
	}
ptr=start;
while(ptr!=NULL)
{
	printf("%d",ptr->data);
	ptr=ptr->next;
}
	return 0;
}