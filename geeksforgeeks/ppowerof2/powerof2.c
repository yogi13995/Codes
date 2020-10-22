#include<stdio.h>

int main()
{ 
int i,j,a,c;
 long long unsigned int b;

scanf("%d",&a);

for(i=0;i<a;i++)
	{
	 scanf("%llu",&b);
	 c=0;
	 
	 if(b==1)
	 {
	 printf("YES\n");
	 }
	 else
	 {
	 
	 while(b!=1 && c==0)
	 {
	  c=b%2;
	  b=b/2;
	  }
	  
	 if(c==1)
	 	{ 
	 	printf("NO\n");
	 	}
	 	else
	 	{
	 	printf("YES\n");
	 	}
	 }
	 
	}
	return 0;
	}
	 	
	
	  
	  
