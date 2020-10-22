#include<stdio.h>

int main()
{
long long int a,b,i;
long long int c[100],d;
scanf("%llu",&a);

for(i=0;i<a;i++)
{
scanf("%llu",&c[i]);
if(c[i]>1)
{
d= 1+(c[i]*(c[i]+1)/2);
printf("%llu",d);
}
else
{d=2;
printf("%llu",d);
}}
return 0;
}



