
#include"addstring.h"

int main()
{
	int i,x,y;
	int *q,*r;
	q=&x;
	r=&y;
	char str[30];
	scanf("%d %d",&x,&y);
	scanf("%s",str);
	void (*fun)(char str[]);
	fun = stringprint;
    fun(str);
    add(q, r);
	return 0;
}
	
