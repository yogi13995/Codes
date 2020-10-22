#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	FILE *fptr;
	char str[120];
	
	fptr = fopen("inputfile3", "w");
	if(fptr==NULL)
	{
		printf("error in openning file");
		exit(1);
	}
	
	while(fgets(str, sizeof(str), stdin) != NULL)
	{
		fputs(str, fptr);
	}
	fclose(fptr);
	return 0;
}
