#include<stdio.h>


int main()
{
int i,n,t,count;
 scanf("%d",&t);
 
 for(i=0;i<t;i++)
 {
 	scanf("%d",&n);
 	count = 0;
 	
 	while(n!=0)
 	{
 		if(n % 2 == 0)
 		{
 			n = n/2;
 			count++;
 		}
 		else
 		{
 			n = n-1;
 			count++;
 		}
 	}
 	printf("%d\n",count);
 }
 return 0;
}
