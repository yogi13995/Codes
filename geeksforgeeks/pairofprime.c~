#include<stdio.h>
#include<math.h>

int main()
{
	int i,t,n,count,squart,j,k,d,a[400],b[400],c,l,m,count1;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		count=0;
		
		for(j=2;j<=n;j++)
		{
			squart =floor(sqrt(j));
			if((j!=2) && (j!=3))
			{
			for(k=2;k<=squart;k++)
			{
				d=j%k;
				
				if(d==0)
				{
				break;
				}
				
				if((k==squart) && (d!=0))
				{	
					a[count]=j;
					count++;
				}
				
			}
		    }
		    else 
		    {
		      a[count]=j;
		      count++;
		     }
		 }
		 printf("%d\n",count);
		 count1=0;
		for(l=0;l<count;l++)
		{
			for(m=l;m<count;m++)
			{
				
				c=a[l]*a[m];
				
				if(c<=n)
				{
					if(a[l]==a[m])
					{
						b[count1]=a[l];
						printf("%d",b[count1]);
						printf(" ");
						count1++;
						b[count1]=a[l];
						printf("%d",b[count1]);
						printf(" ");
						count1++;
					}
					else
					{
						b[count1]=a[l];
						printf("%d",b[count1]);
						printf(" ");
						count1++;
						b[count1]=a[m];
						printf("%d",b[count1]);
						printf(" ");
						count1++;
						b[count1]=a[m];
						printf("%d",b[count1]);
						printf(" ");
						count1++;
						b[count1]=a[l];
						printf("%d",b[count1]);
						printf(" ");
						count1++;
					}
				}
			}
		}
printf("\n");
						
	}
return 0;
}
			
