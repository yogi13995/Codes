#include<stdio.h>
#include<string.h>

int count(int b);
int main()
{
int t,n,a,i;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&n);
a = count(n);
printf("%d\n",a);

}
return 0;
}

int count(int b)
{

int table[b+1],i;

memset(table,0,sizeof(table));
table[0] = 1;
for(i=3;i<=b;i++)
{
	table[i] +=table[i-3];
}

for(i=5;i<=b;i++)
{
	table[i] +=table[i-5];
}

for(i=10;i<=b;i++)
{
	table[i] += table[i-10];
}

return table[b];
}
