#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	FILE *fptr;
	char str[120];
	
	fptr = fopen("inputfile2", "r");
	if(fptr == NULL)
	{
		printf("error in openning the file");
		exit(1);
	}
	
	while(fscanf(fptr, "%c",str)!=EOF)
	{
		printf("%s",str);
	}
	fclose(fptr);
	return 0;
}
	
