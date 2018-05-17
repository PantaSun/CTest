#include"stdio.h"
/*
 * 反转字符数组，不用数组，即不用生命一个局部数组来临时存储参数字符串
 *
 */
void reverse_string(char *string);
int main()
{

	char a[] = "hello world!";
	reverse_string(a);
	printf("hello world! is %s\n", a);
	return 0;
}

void reverse_string(char *string)
{
	char *p1 = string;
	char *p2 = string;
	while(*p1 != '\0')
	{
		//printf("%c\n", *p1);
		p1++;
	}
	
	char temp;
	while(p2 <= p1)
	{	
		temp = *p2;
		*p2 = *(--p1);
		*p1 = temp;
		p2++;
	}

}
