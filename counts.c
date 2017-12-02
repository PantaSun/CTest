
#include"stdio.h"
int main()
{
	int c, c_table, c_space, c_enter;
	c_table = 0;	
	c_space = 0;
	c_enter = 0;
	while((c = getchar())!= EOF)
	{
		if(c == '\n')
			++c_enter;
		else if(c == '\t')
			++c_table;
		else if(c == ' ')
			++c_space;
	}
	printf("the number of enter is %d\n", c_enter);
	printf("the number of space is %d\n", c_space);
	printf("the number of table is %d\n", c_table);
	
}
