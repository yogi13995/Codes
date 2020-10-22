#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
 	int i,t,a,b,c,d,x,y,root1,root2;
 	scanf("%d",&t);
 	for(i=0;i<t;i++)
 	{
 		scanf("%d %d %d",&a,&b,&c);
 		d=((b*b)- 4*a*c);
 		if(a==0)
 		{
 		 printf("Invalid\n");
 		
 		}
 		else if(d<0)
 		{
 			printf("Imaginary\n");
 		}
 		else 
 		{
 			if(a>0)
 			{
 			root1=floor((-b+sqrt(d))/(2*a));
 			root2=floor((-b-sqrt(d))/(2*a));
 			x=(root1)>(root2)?root1:root2;
 			y=(root2)<(root1)?root2:root1;
 			printf("%d %d\n",x,y);
 		   }
 		   else
 		   {
 		   	root1=floor((-b+sqrt(d))/(2*a));
 			root2=floor((-b-sqrt(d))/(2*a));
 			x=(root1)>(root2)?root1:root2;
 			y=(root2)<(root1)?root2:root1;
 			printf("%d %d\n",y,x);
 		    }
 		 }
 		
 		
 	}
return 0;
}
