#include<stdio.h>
#include<math.h>

int main()
{
int i,j,k,a,b,n;
double r;
double nth;
scanf("%d",&j);
	for(i=0;i<j;i++)
	{
	scanf("%d %d %d",&a,&b,&n);
	r=(double)b/a;
	printf("%lf\n", r);
	nth=floor((double)a*pow(r,n-1));
	printf("%lf\n", nth);
	printf("%lld\n",(long long)nth);
	}
return 0;
}
	
