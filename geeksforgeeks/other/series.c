#include<stdio.h>

int main()
{
long long unsigned int b,i;
int c[100],a;

scanf("%d",&a);


for(i=0;i<a;i++)
{
scanf("%d",&c[i]);

b= c[i]*(c[i]+1)/2;

printf("%llu\n",b);
}
return 0;
}

