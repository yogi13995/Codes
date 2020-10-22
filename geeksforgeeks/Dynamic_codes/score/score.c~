#include<stdio.h>
int score2(int a, int b, int k);
int score3(int k);
int main()
{
int t,k,i,count,n1,n2,n3,count2,count3,count4,count5;
scanf("%d",&t);
for(i=0;i<t;i++)
	{
	scanf("%d",&k);
	
	count = 0;
    if(k%3 == 0)
    {
    	count++;
    }
    if(k%5 == 0)
    {
    	count++;
    }
    if(k%10 == 0)
    {	
    	count++;
    }
    count2 = score2(3,5,k);
    count3 = score2(5,10,k);
    count4 = score2(3,10,k);
    count5 = score3(k);
    count = count + count2 + count3 + count4 +count5;
    //count =  count5;
   printf("%d\n",count);
   }
    return 0;
}
   
   

int score2(int a, int b, int k)
{
int n2,n1,d,count;
n1 = 1;
n2 = 1;
count =0;
while(n1 != 0)
{
	if(n1*a + n2*b <= k)
	{
	d = (k- b*n2)%a;
	if(d == 0)
	{
		count++;
	}
	n2 = n2 + 1;
	n1 = (k- b*n2)/a;
	//printf("%d\n",count);
	}
	else
	{
	break;
	}
}
return count;
}

int score3(int k)
{
int n1,n2,n3,d,count,flag,n4;
n1 = 1;
n2 =0;
count = 0;
flag = 0;
while(flag !=1)
{
	n3=1;
	n2 = n2+1;
	n4 = n2;
	while(n4 != 0)
	{ 
		
		n1 = (k-5*n4 - 10*n3)/3;
		if((k>=3*n1 + 5*n4 + 10*n3) && n1 > 0)
	    {
		d = (k-5*n4 - 10*n3)%3;
		if(d == 0)
		{
			count++;
			//printf("y");
		}
		n3 = n3 + 1;
		n4 = n4 - 1;
		
		}
		else
		{
			break;
		}
		
	}
	if((k < (3*n1 + 5*n2 + 10*n3) ) && (n3 ==1))
	{
		flag = 1;
	}
	
}
return count;
}	


