#include<stdio.h>
#include<math.h>

int main()
{
	int i,t,j,r,k,x2,d2;
	double n,x,d,x1;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		n = 0;
		scanf("%lf",&n);
		x= n-floor(n);
		j=1;
		d=0.000000;
		d=x;
		printf("%0.25lf\n",n);
		while(d!=0.0)
		{
			j=j*10;
			x1=d*10;
			d=x1-floor(x1);
			
			printf("%0.25f  %lf\n",x1,d);
				
		}
		r=1;
		k=1;
		x2=(int)(x*j);
		
		while(r!=0)
		{
			r=j*k%(x2);
			d2=j*k/(x2);
		//	printf("%d",r);
			k++;
		}
		//printf("%d\n",d2);
		
	}
	return 0;
}
