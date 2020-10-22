#include<stdio.h>
#include<stdlib.h>

typedef struct Data
	{
		int n1,n2,n3;
	} data;	
typedef struct Sata
	{
		int s1,s2;
	} sata;
	
int main()
{
int i=2;
FILE *fptr;
data num;
sata sum;

fptr = fopen("/home/yogesh/yogi/myc/mytraining/readandwrite.bin","rb+");

if(fptr==NULL)
{
	printf("error\n");
	exit(1);
}



	num.n1 = i;
	num.n2 = 4*i;
	num.n3 = 5*i;

fwrite(&num, sizeof(data),1,fptr);




	fread(&sum, sizeof(sata), 1, fptr);
	printf("%d  %d\n",sum.s1,sum.s2);

          
fclose(fptr);

return 0;
}



