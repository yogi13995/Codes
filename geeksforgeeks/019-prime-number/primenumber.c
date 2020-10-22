#include<stdio.h>

int main()
{
int i,j,k,a;
long long int b,c,d,e,f,g,h;
scanf("%d",&a);
	for(i=0;i<a;i++)
	{
	scanf("%llu",&b);
	c=b%2;
	d=b%3;
	e=b%4;
	f=b%5;
	g=b%7;
	h=c*d*e*f*g;
	if(h==0)
	{
	printf("No");
	}
	else
	{
	printf("Yes");
	}
	}
return 0;
}
