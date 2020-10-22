#include<stdio.h>
int main ()
{
long long int b[1000],c[1000],d,e;
int a,i,j;
scanf("%d",&a);

for(i=0;i<a;i++)
{
scanf("%lld %lld",&b[i],&c[i]);
for(j=1;j<=10;j++)
{
d=b[i]&1;
e=c[i]&1;

if(b[i]==c[i])
{
printf("%d", -1);
break;
}
 
else if(d!=e)
 {
 printf("%d",j);
 break;
 }
 else 
{
 b[i]=b[i]>>1;
 c[i]=c[i]>>1;
 }
 }
 }
 return 0;
 }
