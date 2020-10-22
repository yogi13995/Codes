#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	FILE *fptr;
	char str[120];
	
	fptr = fopen("inputfile2", "r");
	if(fptr==NULL)
	{
		printf("error in opening file");
		exit(1);
	}
	
	while(fgets(str, sizeof(str),fptr)!=NULL)
	{
		
		printf("%s\n",str);
		//printf("%c", fgets(str, sizeof(str),fptr));
	}
	fclose(fptr);
    return 0;
}
