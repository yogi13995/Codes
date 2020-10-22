#include<stdio.h>
#include<stdlib.h>

int main()
{
int num;
FILE *fptr;

fptr = fopen("/home/yogesh/yogi/myc/mytraining/write.txt","r");

if(fptr==NULL)
{
	printf("error\n");
	exit(1);
}

fscanf(fptr, "%d",&num);
printf("%d",num);
fclose(fptr);

return 0;
}
