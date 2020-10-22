#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct 
	{
		char name[15000];
		int sub1;
		int sub2;
		int sub3;
		
	} student;
	
int main()
{
int i,t,n,j,k,max,avg[15];
student st[15];
char stname[15000];

scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		
		for(j=0;j<n;j++)
		{
		scanf("%s",st[j].name);
		    scanf("%d %d %d",&st[j].sub1,&st[j].sub2,&st[j].sub3);
		
		//scanf("%s %d %d %d",st[j].name, &st[j].sub1, &st[j].sub2, &st[j].sub3);
		}
		max=0;
		for(k=0;k<n;k++)
		{
			avg[k]=(st[k].sub1+st[k].sub2+st[k].sub3)/3;
			
		
			if(max<avg[k] || k==0)
			{	
				max=avg[k];
				memset(stname, 0, 15000);
				strcpy(stname, st[k].name);
				
				
				
			}
		}
		//printf("%s %d\n",stname,max);
		printf("%s",stname);
		printf(" ");
		printf("%d\n",max);
	}
return 0;
}
				
	
		
