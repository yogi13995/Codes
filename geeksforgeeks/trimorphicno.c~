#include<stdio.h>
#include<math.h>

int main()
{
	int i,t,a2,d2,r2;
	unsigned long long int a1,d1,r1,n;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%llu",&n);
		d2 = 1;
	//	a1 = n*n;
		a1 = n*(n*n);
		//a1 = 32*(8192*8192);
		//printf("%llu",a1);
		a2 = n;
		while(d2!=0)
		{
			r1 = a1%10;
			d1 = a1/10;
			r2 = a2%10;
			d2 = a2/10;
			a1 = d1;
			a2 = d2;
		//	printf("%llu %llu %d %d\n",r1,d1,r2,d2);
			if(r1!=r2 && d2!=0)
			{
				printf("%d\n",0);
				break;
			}
			else if(d2 == 0 )
			{
				if(r1 == r2)
				{
					printf("%d\n",1);
				}
				else
				{
					printf("%d\n",0);
				}
			}
		}
	}
	return 0;
}
		
