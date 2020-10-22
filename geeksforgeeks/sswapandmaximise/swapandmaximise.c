#include<stdio.h>
#include<stdlib.h>

int main()
{
unsigned int a, b,c[100000],i,j,l,k,s;
scanf("%d",&a);
for(i=0;i<a;i++)
	{
	scanf("%d",&b);
	for(l=0;l<b;l++)
	   {
	   scanf("%d",&c[l]);
	   }

	for(j=0;j<(b);j++)
		{ 
		s=c[j];
		for(k=j+1;k<b;k++)
			{
			if(s>c[k])
			{
			s=c[k];
			c[k]=c[j];
			c[j]=s;
			
		     }
		     
		     }
		     printf("%d\n",c[j]);
		 }
		
    for(
	}
	return 0;
}
