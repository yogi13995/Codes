#include<stdio.h>

int main()
{
unsigned int a, b,c[100000],i,j,k,s,m,l,count;
scanf("%d",&a);
for(i=0;i<a;i++)
	{
	scanf("%d",&b);
	for(l=0;l<b;l++)
	   {
	   scanf("%d",&c[l]);
	   }
	count=0;
	for(j=0;j<(b);j++)
		{
		
		
		for(k=(j+1);k<(b);k++)
		{
		
		s=0;
		m=0;
		s=c[j]+c[k];
		m=c[j]*c[k];
		
		
		if(s<m)
		{
		count++;
		
		
		}}}printf("%d\n",count);}
		return 0;
		}
