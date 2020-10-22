#include<stdio.h>
#include"myfun.h"

int main()
{
int a,b,sum;
float avg;
scanf("%d",&a);
scanf("%d",&b);

sum = sumofnumbers(a,b);
avg = avgofnumbers(a,b);

printf("%d  %f",sum,avg);

return 0;
}




