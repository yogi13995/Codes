#include<stdio.h>

int main()
{
	int i,t,n,m;
	float r,arcLenth;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%f %d %d",&r,&n,&m);
		 
		 arcLenth = 2*3.14*r*(1.00-((1.00)*n/m));
		 printf("%.2f\n",arcLenth);
    }
return 0;
}
