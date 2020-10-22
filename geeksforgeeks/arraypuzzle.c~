#include<stdio.h>
void SumArray(int arr[] ,int n);
void SumArray(int arr[] ,int n)
{
	int sum,k,l;
	sum=0;
	
	for(k=0;k<n;k++)
	{
		sum=sum+arr[k];
	}
	for(l=0;l<n;l++)
	{
		arr[l]=sum-arr[l];
	}
	
}

int main()
{
	int i,t,n,arr[10000],j,m;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[j]);
		}
		SumArray(arr,n);
		for(m=0;m<n;m++)
		{
			printf("%d",arr[m]);
			printf(" ");
			
		}
		printf("\n");
	}
return 0;
}
		
			
