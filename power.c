#include"stdio.h"

int power(int m, int n); 
int main()
{
	/*mi yun suan */
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d %d %d\n",i,power(2,i),power(-3,i));
	}

}

int power(int m, int n)
{
	int r;
	int i;
	r = 1;
	for (i=0;i<n;i++)
	{	
		r = r*m;
	}
	return r;
}
