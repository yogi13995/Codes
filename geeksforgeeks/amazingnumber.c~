#include<stdio.h>
#include<math.h>

int main()
{
int i,t,j;
double squar2;
long long unsigned int n,count,squar1,r;
scanf("%d",&t);
 for(i=0;i<t;i++)
 {
 	scanf("%llu",&n);
 count =0;
 squar1=ceil(sqrt(sqrt(n)));
 squar2=ceil(sqrt(n));
 
 	for(j=2;j<=(squar1);j++)
 		{
 			r=((int)squar2)%j;
 			if((squar2-sqrt(n))!=0.0)
 			{
 			printf("%d\n",0);
 			break;
 			}
 			else if(squar2==2 || squar2==3)
 			{
 				printf("%d\n",1);
 				break;
 			}
 			else if(r==0)
 			{
 				printf("%d\n",0);
 				break;
 			}
 			else if(j==squar1 && r!=0)
 			{
 				printf("%d\n",1);
 			}
 			
 		}
 	}
 return 0;
 }
