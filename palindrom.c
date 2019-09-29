#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int l,i=0,flag;
	char s[]="madam";
	l=strlen(s);
	for(int i=0;i<l/2;i++)
	{
		if(s[i]==s[l-i])
		{
			flag=0;
		}
		else
		{
			flag=1;
			break;
		}

	}
	if(flag==0)
	{
		printf("identical\n");
	}
	else
		printf("not\n");
	return 0;
}
