#include<stdio.h>

int main()
{
int i,j,k,l,m,n,o,count,t;
 
scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	scanf("%d %d",&m,&n);
	int a[m];
	unsigned int b[n],p[m];
	 for(j=0;j<m;j++)
	 {
	 	
	 	scanf("%d",&a[j]);
	 	p[j]=100001;
	 
	 }
	 
	 for(k=0;k<n;k++)
	 {
	 	scanf("%d",&b[k]);
	 	
	 }
	 count=0;
	 
	for(l=0;l<m;l++)
	{
	 	for(o=0;o<n;o++)
	 	{
	 
	 		if((a[l]==b[o]) && (a[l]!=p[l]))
	 		{
	 			count++;
	 			p[l]=a[l];
	 			b[o]=100001;
	 		
	 		}
	 		else if((a[l]==b[o]) && (a[l]==p[l]))
	 		{
	 			b[o]=100001;
	 			
	 		}
	 	}
	 }
	 printf("%d\n",count);
	 }
	 return 0;
}
