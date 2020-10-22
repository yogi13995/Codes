#include<stdio.h>

int main()
{

int b,c,i,j,k;
k=0;
int a[100];

scanf("%d",&b);

for(i=0;i<b;i++)
   {c=i;

      scanf("%d",&a[i]);

   }

for(j=0;j<b;j++) 
{
k= 7-a[j];
printf("%d\n",k);

}
return 0;
}
 
