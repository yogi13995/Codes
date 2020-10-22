#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int i,t,count,j,squart,count2,k;
	long long unsigned int n,r,d,xor,a[100],b[100],c;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		count =0;
		count2=0;
		squart = floor(sqrt(n));
		c=n;
		memset(a, 0, 100);
		memset(b, 0, 100);
		for(j=1;j<=squart;j++)
		{
			r=c%j;
			d=c/j;
			
			if(r==0 && j!=d)
			{
				a[count]=j;
				if(d!=n)
				{
					
					b[count2]=d;
					count2++;
				}
				count++;
				
				//printf("%lld  %lld\n",a[count-1],b[count2-1]);
			}
			else if(r==0 && j==d)
			{
				a[count]=j;
				count++;
			}
			//printf("%lld\n",b[count2]);
		}
		xor = a[0];
		
		for(k=0;k<(count+count2);k++)
		{
			
			if(k<count)
			{
				printf("%lld",a[k]);
				printf(" ");
			}
			if(k>=count)
			{
				a[k]=b[count+count2-k-1];
				printf("%lld",a[k]);
				printf(" ");
			}
			if(k>0)
			{
				xor =xor ^ a[k];
			}
		}
		printf("\n");
	    printf("%lld\n",xor);
	}
	return 0;
}
