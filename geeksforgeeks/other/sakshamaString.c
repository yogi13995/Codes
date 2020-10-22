#include<stdio.h>
int main()
{
	char c[100] = "2b12cd345ef678eriture1lkfjg78kjdfh679";
	
	int i;
	int storePre = 0, storeCurr = 0;
	
	i = 0;
	while(c[i] != '\0')
	{
		if(c[i] >= '0' && c[i] <= '9')
		{
			storeCurr = c[i] - 48;
			i++;
			while(c[i] != '\0' && c[i] >= '0' && c[i] <= '9')
			{
				storeCurr = storeCurr*10 + (c[i] - 48);
				i++;
			}
			if(storeCurr > storePre)
				storePre = storeCurr;
				
			printf("\nCurrent Num = %d\n",storePre);
		}
		else
			i++;
	}

	return 0;
}
