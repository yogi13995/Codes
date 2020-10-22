#include<stdio.h>
#include<math.h>

int main()
{
int i,j,k,a;
float b,c,d,e,f;
scanf("%d",&a);
	for(i=0;i<a;i++)
	{
	scanf("%f %f",&b,&c);
	if(c!=60)
	{
	d=(b*6*5)+(30*c/60);
	}
	else
	{
	    d=(b*6*5);
	}
	
	e=c*6;
	f= fabs(d-e);
	if (f>180)
	{
	f= 360-f;
	printf("%d\n",(int)f);
	}
	else
	{
	printf("%d\n",(int)f);
	}
	}
return 0;
}
