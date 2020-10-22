#include<stdio.h>

int main()
{
long long  int b[100],c;
int i, a;
scanf("%d",&a);

for(i=0;i<a;i++)
{
scanf("%lld",&b[i]);

c=b[i]%5;
if(c==0)
{
printf("YES\n");
}
else
{
printf("NO\n");
}
}
return 0;
}
