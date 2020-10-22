#include<stdio.h>
long int factorial(int k);


int main()
{
int i,j,k,a,b;
long int fact;
scanf("%d",&a);

for(i=0;i<a;i++)
	{
	scanf("%d",&b);
    fact=factorial(b);
    printf("%ld\n",fact);
    }
    return 0;
  }
  
  long int factorial(int k)
  {
  if(k>=1)
  {
  return k*factorial(k-1);
  }
  else
  {
  return 1;
  }
  }
    
	
