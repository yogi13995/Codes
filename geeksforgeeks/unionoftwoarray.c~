#include<stdio.h>

int main()
{
int i,t,n,m,j,k,count,y,x,o,l,z,c;
scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&m);
		y=n>m?n:m;
		z=n<m?n:m;
		int a[y],b[z],p[y+z];
		for(c=0;c<y+z;c++)
		{
			p[c]=100001;
		}
		
		for(j=0;j<y;j++)
		{
		   scanf("%d",&a[j]);
		}
		
		for(k=0;k<z;k++)
		{
			scanf("%d",&b[k]);
		}
		count = 1;
		
		
		for(l=0;l<y;l++)
		{
			x=count;
			
			for(o=0;o<x;o++)
			{
				if(l<=(m+n-y-1))
				{
					printf("yes %d  %d",a[l],b[l]);
					if(a[l]==b[l])
					{
						
						if(a[l]==p[o])
						{
							break;
						}
						else if((a[l]!=p[o]) && (o==(x-1)))
						{
							count++;
							p[count-1]=a[l];
							printf(" yes %d",p[count-1]);
						}
					
					
			    }
			    else if(l>(m+n-y-1))
			    {
			    	printf("%d",(m+n-y));
			    }
			}
		}
	}
	}
return 0;
}
		
