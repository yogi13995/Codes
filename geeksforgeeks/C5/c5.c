#include<stdio.h>

int main()
{

int b,c,i,j;
int a[c];

scanf("%d",&b);

for(i=0;i<b;i++)
   {

      scanf("%d",&a[i]);
   }

for(j=0;j<b;j++) 
{
 

switch(a[j])
{
case 1:
       printf("%d\n",6);
       break;

case 2:
       printf("%d\n",5);
       break;

case 3:
       printf("%d\n",4);
       break;

case 4:
       printf("%d\n",3);
       break;

case 5:
       printf("%d\n",2);
       break;

case 6:
       printf("%d\n",1);
       break;

}
}
return 0;
}
