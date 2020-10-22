#include"chem_matrix.h"


int mcm(int a, int b)
{
	int i,x,y,quotient,remainder;
	
	x= abs(a)<abs(b)?abs(a):abs(b);        //Finding out bigger and smaller number
	y= abs(a)>abs(b)?abs(a):abs(b);
	//printf("%d %d\n",x,y);
	remainder=1;
	
	while(remainder!=0)			//Run loop till finding the proper divisor for bigger number
	{
		remainder=y%x;
		
		
		if(remainder==0)
		{
			//printf(" %d\n",x);
			return x;			//Return value of divisor if remainder is 0
			break;
		}
		else
		{
			y=x;				//If remainder is not zero then devide the divisor with remainder in next itteration
			x=remainder;
		}
	}
}



int lcm(int raw, int higher, int b[Max])
{
	int i,flag,remainder,n;
	
	n=1;
	
	while(flag==0)        //Run the loop till all values of b[] devide the 'higher' properly.
	{
		
		for(i=0;i<raw;i++)
		{
			remainder =abs((higher*n))%abs( b[i]);
			
			if(remainder==0)
			{
				flag=1;
			}
			else
			{
				flag=0;
				n++;
				
				break;
			}
		}
	}
	return (abs(higher*n));    //return modified value of 'higher'.
}






void infiniteSolution(int raw, int coloumn, int a[Max][Max])
{
	
	int i,j,k,sum1,b[Max],m,c[Max],higher,e[Max],common;
	
	printf("matrix has infinite solution\n");
	higher=0;
	

	
	for(i=0;i<raw;i++)      //Finding out the higher number from the pivot positions of matrix.
	{
		c[i]=abs(a[i][i]);
		//printf("%d  %d",c[i],higher);
		if(c[i]>higher)
		{
			higher=c[i];
		}
	}
	
	m=lcm(raw,higher,c);    //Finding out the lcm of all pivot values to get the value of indepentent variable.
	
	b[coloumn-1]=m;
	
	for(j=(raw-1);j>=0;j--)  //Storing all the values of variables in b[].
	{
		sum1=0;
		
		for(k=(coloumn-1);k>j;k--)
		{
			sum1=sum1-(a[j][k]*b[k]);
		}
		
		sum1=sum1/(a[j][j]);
		b[j]=sum1;
		
		
	}
	
	common=b[0];
	
	for(i=0;i<(raw);i++)  //finding out the mcm of all values of variables.
	{
		common=mcm(common,b[i+1]);
		//printf("%d\n",common);	
	}
		
	printf("for independent variable compound x[%d] value=%d other compound's will be as follow\n",coloumn,(b[coloumn-1]/common));
	for(i=(coloumn-1);i>=0;i--)
	{
	printf("compound[%d]=%d\n",(i+1),(b[i]/common));   //print the values afer deviding it with mcm.
	}
}


	
	
	
	

void uniqueSolution(int raw, int coloumn, int a[Max][Max]) //Function if a matrix has unique solution.
{
	int i;
	
	printf("chemical equatiom does not exist\n");
	
	for(i=0;i<coloumn;i++)
	{
		printf("compound[%d]=%d\n",i,0);
	}
}



void solution(int raw, int coloumn, int a[Max][Max])
{
	int i,j,sum,count;
	
	count=0;
	
	for(i=0;i<raw;i++) //loop for counting the no of the zero raws.
	{
		sum=0;
		
		for(j=0;j<coloumn;j++)
		{
			sum=sum+a[i][j];
		}
		
		if(sum==0)
		{
			count++;
		}
	}
	if(coloumn==(raw-count))     //Finding out wheather the matrix has unique or infinite solution.
	{
		//printf("jhgjgj = %d",raw);
		uniqueSolution(raw, coloumn, a);
	}
	else
	{
		//printf("jhgjgj = %d\n",raw);
		infiniteSolution(raw, coloumn, a);
		//printf("jhgjgjgfg = %d\n",raw);
		
	}
}





		



void make0(int raw, int coloumn, int a[Max][Max])
{
	int i,j,k,x,y;
	
	printf("echelon form of matrix\n ");
	
	for(i=0;i<(raw-1);i++) //Loop to get the echelon form of matrix.
	{
		for(j=(i+1);j<raw;j++)
		{
			if(a[j][i]!=0)
			{
				x=a[i][i];
			    y=a[j][i];
				for(k=0;k<coloumn;k++) //Multiplying two rows with pivot values of each other and then subtract.
				{
					a[j][k]=((x*a[j][k])-(y*a[i][k]));
				}
			}
		}
	}
}
					
			




void swap( int raw, int coloumn, int a[Max][Max])
{
	int i,j,b,k;
	
	for(i=0;i<raw;i++) //Swaping the raw with other raw if the pivot is 0.
	
		if(a[i][i]==0)
		{
			for(j=(i+1);j<raw;j++)
			{
				if(a[j][i]!=0)
				{
					for(k=0;k<coloumn;k++)  //swaping all values of raw.
					{
						b=a[i][k];
						a[i][k]= a[j][k];
						a[j][k]=b;
					}
				}
			}
		}
}
				
	





void printMatrix(int raw, int coloumn, int a[Max][Max])
{
	int i,j;
	
	for(i=0;i<raw;i++)   //Printing the array in the matrix form.
	{
		for(j=0;j<coloumn;j++)
		{
			printf("%d",a[i][j]);
			printf("  ");
			
		}
		printf("\n");
	}
}


	
void rawAndColoumnInput(int *raw, int *column )
{
	printf("enter value of raw and coloumn\n");  
	scanf("%d %d",raw,column);
}




void inputForMatrix(int raw,int coloumn,int a[Max][Max])
{
	int i,j;
	printf("enter the values of all elemets of matrix\n");  //Taking the values of matrix
	for(i=0;i<raw;i++)
	{
		for(j=0;j<coloumn;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
		
