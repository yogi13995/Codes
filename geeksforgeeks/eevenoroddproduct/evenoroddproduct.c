#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,t,n1,n2;
	char str1[100],str2[100];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%s %s",str1,str2);
		n1=strlen(str1);
		n2= strlen(str2);
		//printf("%d %d\n",(str1[n1-1]-48),(str2[n2-1]-48));
		
		if((((str1[n1-1])-48)%2 != 0) && (((str2[n2-1])-48)%2 !=0))
		{
			printf("%d\n",0);
			
		}
		else
		{
			printf("%d\n",1);
		}
	}
	return 0;
}		
