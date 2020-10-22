#include<stdio.h>

int main()
{
long long unsigned int b[100],c,d[100];
long long unsigned int i,a;

scanf("%llu",&a);

for(i=0;i<a;i++)
{
scanf("%llu %llu",&b[i],&d[i]);

if(b[i]%2==0)
{
c=(b[i]/2)*d[i];
printf("%llu\n",c);
}
else
{
c=((b[i]+1)/2)*d[i];
printf("%llu\n",c);
}
}
return 0;
}
