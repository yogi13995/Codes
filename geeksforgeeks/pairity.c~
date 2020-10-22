#include<stdio.h>

int main()
{
int a,b[100],c,i,d,j;

scanf("%d",&a);

for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
c=0;
for(j=0;j<8;j++)
{

c=c+(b[i]&1);
b[i]=b[i]>>1;
}

d=c%2;
if(d==0)
{
printf("even\n");
}
else
{
printf("odd\n");
}
}
return 0;
}
