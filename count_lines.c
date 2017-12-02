#include"stdio.h"
int main()
{
	/*count lines in input*/
	int c;
	long nc;
	nc = 0;
	while((c=getchar())!=EOF)
	{
		if (c == '\n')
			++nc;	
	}
	printf("lines is %ld\n",nc);
	return 0;
}
