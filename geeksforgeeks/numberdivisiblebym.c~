#include<stdio.h>

int main()
{
	int i,t,a,b,c,r,count;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		r=1;
		count =0;
		
		while(r!=0)
		{
			r=a%c;
			
			
			if(r==0)
			{
				count++;
				break;
			}
			a++;
		}
		
		count = count + (b-a)/c;
		printf("%d\n",count);
	}
	return 0;
}
		
		
