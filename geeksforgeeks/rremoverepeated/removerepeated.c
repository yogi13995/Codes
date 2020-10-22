#include<stdio.h>

int main()
{
	int i,j,t,count,c[18],b[18],k;
	long long int n,a,r,d;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%llu",&n);
		count=0;
		j=0;
		d=1;
		a=n;
		while(d!=0)
		{
		r=a%10;
		d=a/10;
		c[j]=r;
		a=d;
		if(j==0)
		{
			b[count]=r;
			count++;
		}
		else if(c[j]!=c[j-1])
		{
			b[count]=c[j];
			count++;
		}
		j++;
	    }
	    
	    for(k=(count-1);k>=0;k--)
	    {
	    	printf("%d",b[k]);
	    }
	    printf("\n");
	 }
return 0;
}
