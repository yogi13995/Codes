#include<stdio.h>

int main()
{
unsigned int a, b,c[250],i,j,k,s,l;
scanf("%d",&a);
for(i=0;i<a;i++)
	{
	scanf("%d",&b);
	for(l=0;l<b;l++)
	   {
	   scanf("%d",&c[l]);
	   }
	s=1000;
	for(j=0;j<(b);j++)
		{
		

		if(s>c[j])
			{
			s=c[j];
			
			}
		}
		printf("%d\n",s);
	   
	  }
	  return 0;
	 }
		
