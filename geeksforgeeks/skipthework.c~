#include<stdio.h>
 
int main()
{
int i,t,n,n2,j,sum;

scanf("%d",&t);

for(i=0;i<t;i++)
{
	scanf("%d",&n);
	
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	
	sort(a[0],a[n-1]);
	
	for(k=0;k<n2;k++)
	{	
		sum = sum + a[k];
	}
	printf("%d\n", sum);
}
return 0;
}

sort( int a[], int l , int h)
{
	if(l<h)
	{
		j = partition(a,l, h);
		sort( a,l,j);
		sort(a,j+1,h);
	}
}

partition (int a[],int l,int h)
{
	int pivot,i,j;
	pivot = a[l];
	i = l;
	j = h:
	
	while(i<h)
	{
		do
		{
			i++;
		}while(a[i] <= pivot);
		
		do 
		{
			j++;
		}while(a[j] > pivot);
		
		if(i<j)
		{
			swap(a[i], a[j]);
		}
	}
	return j;
}

