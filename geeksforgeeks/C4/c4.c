#include<stdio.h>

int main()
{
long long unsigned int b,i,j,k;
long long unsigned int d=0;
long long unsigned int c;
scanf("%d",&b);

for(j=0;j<b;j++)
{ 
    scanf("%d",&c);
    
    i=c;
    d=i*(2*i+1)*(2*i-1)/3;
    printf("%llu\n",d);
   
}
return 0;
}
