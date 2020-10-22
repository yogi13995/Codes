#include<stdio.h>
#include<math.h>

int main()
{
	int i,t,squart3,j,r;
	long long unsigned int n,squart,a;
	double squart2;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%llu",&n);
		squart=floor(sqrt(n));
		squart2 = sqrt(n);
		squart3 = ceil(sqrt(squart2));
		
		if((1.0)*squart == squart2)
		{
		 	a=squart;
			for(j=2;j<=squart3;j++)
			{
				r=a%j;
				if(a==2 ||a==3)
				{
					printf("%d\n",1);
				}
				else if(r==0)
				{
					printf("%d\n",0);
					break;
				}
				else if( r != 0 && j == squart3)
				{
					printf("%d\n",1);
				}
			}
		}
		else
		{
			printf("%d\n",0);
			break;
		}
	}
	return 0;
}

			
			

