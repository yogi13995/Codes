#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j,k,a,b[100],c,d,e[100],f;
scanf("%d",&a);
for(i=0;i<a;i++)
	{
	scanf("%d",&b[i]);
	scanf("%d",&e[i]);
	}
	
	for(j=0;j<a;j++)
	{
	c=0;
	f=1;

	do
	{
	d=c;
	c=abs(e[j])*f;
	f++;
	
	}
	while(abs(b[j])>=abs(c));
	
	if((abs(c)-abs(b[j]))==(abs(b[j])-abs(d)))
	{
	printf("%d\n",(abs(b[j])/b[j])*c);
	}
	else if((abs(c)-abs(b[j]))>(abs(b[j])-abs(d)))
	{
	printf("%d\n",(abs(b[j])/b[j])*d);
	}
	else if((abs(c)-abs(b[j]))<(abs(b[j])-abs(d)))
	{
	printf("%d\n",(abs(b[j])/b[j])*c);
	}
	
}
return 0;
}
	
