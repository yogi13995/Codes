#include<stdio.h>
int way(int x,int y,int count);
int main()
{
int i,t,m,n,w,count;
scanf("%d",&t);

for(i=0;i<t;i++)
{
	scanf("%d %d",&m,&n);
	count=0;
	w=way(m,n,count);
	printf("%d\n",w);

	
	
}
return 0;
}

int way(int x,int y,int count)
{
int j,k,n;

	if(count == 0 && y==1)
	{
	    count=1;
	}
	else
	{
	for(j=x-1;j>=0;j--)
	{
	

	
		for(k=0;k<y-1;k++)
		{
		//printf("%d\n",j);
	//	printf("%d\n",k);
			if(k==0)
			{
				count++;
			//	printf("y\n");
				
			}
			if(k==1)
			{
				count=count+j;
			//	printf("x\n");
				
				
		
			}
			if(k>1)
			{
				count = way(j,k+1,count);
			//	printf("s\n");
			
				
			}
		}
	}


	return count;
	}	
}
