#include <stdio.h>
void create(int);
struct n
{
	int data;
	struct n *next;

}*start=NULL;
int main(int argc, char const *argv[])
{

	create(10);
	return 0;
}
void create(int item)
{
	struct n *ptr,*c;
	for(int i=0;i<5;i++)
	{
	
	ptr=(struct n*)malloc(sizeof(struct n*));
	printf("enter");
	scanf("%d",&item);
     ptr->data=item;
 }
if(start==NULL)
{
start=ptr;
ptr->next=NULL;
}
else
{
c=start;
}
while(c->next!=NULL)
{
	printf("%d",c->data);
	c=c->next;
}

}
