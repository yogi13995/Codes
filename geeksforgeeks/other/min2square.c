#include<stdio.h>

int main()
{
long long int b[100000],c,d,e;
int i,j,a;
scanf("%d",&a);

for(i=0;i<a;i++)
{
scanf("%lld",&b[i]);

d=1;
for(j=0;j<18;j++)
{

 if (b[i]<=d)
 {

printf("%lld\n",d);
break;
}

else
d=d*2;

}}
return 0;
}
