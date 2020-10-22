#include<stdio.h>
#include<string.h>
int check(int x,char arr[],int n,int min,int count);
int main()
{
	int t,min=999;
	scanf("%d",&t);
	char arr[20];
	for(int i =0;i<t;i++)
	{
		scanf("%s",arr);
		int x =1;
		int n = strlen(arr) -1;
		int count =0;
		min = check(x,arr,n,min,count);
		printf("%d",min);
		
	}
	return 0;
}
		
		
		
int check(int x,char arr[], int n, int min,int count)
{
	int a =x;
	int b = count;
	if(a >=n)
	{
		count = b +1;
		a++;
		printf("X\n");
	}
	 if((arr[0] != arr[a]) && (a <= n))
	{
		a++;
		b++;
		printf("l\n");
		count = check(a,arr,n,min,b);
	}
	if((arr[0] == arr[a]) && (a <= n))
	{
		int i = 0,s = a;
		while(i<=s)
		{
			if(arr[i] == arr[a])
			{
				printf("Y\n");
			
			if(i == s-1)
			{
				b++;
				printf("YY\n");
				count = check(a,arr,n,min,b);
			}
			a++;
			i++;
			}
			else
			{
				printf("N\n");
				break;
			}
		}
	}
	if(min>count)
	{
		min = count;
		printf("3\n");
	}
	return min;
}
		
