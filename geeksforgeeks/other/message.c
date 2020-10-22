#include<stdio.h>

int main()
{
int a,b[100],c,d,i;

scanf("%d",&a);

for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
c=2*(b[i]-1);

printf("%d",c);
}
return 0;
}
