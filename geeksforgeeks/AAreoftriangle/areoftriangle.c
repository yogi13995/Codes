#include<stdio.h>
#include<math.h>

int main()
{
	int i,a,b,c,t;
	double p,area;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	 	scanf("%d %d %d",&a,&b,&c);
	if(((a+b)>c) && ((a+c)>b) && ((b+c)>a))
	{
		
		
		p=(1.000000*(a+b+c))/2;
		area=sqrt((p*(p-a)*(p-b)*(p-c)));
		

		
	}
	else
	{
		area=0.000000;
	}	
		printf("%1f\n",area);
	}
return 0;
}
