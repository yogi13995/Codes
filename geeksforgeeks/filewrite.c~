#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n;
	FILE *fptr;
	
	fptr= fopen("/home/yogesh/yogi/myc/mytraining/write.txt","w");
	
	if(fptr==NULL)
	{
		printf("error");
		exit(1);
	}
	
	scanf("%d",&n);
	fprintf(fptr,"%d",n);
	fclose(fptr);
	
	return 0;
}
	
