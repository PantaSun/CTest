#include"stdio.h"

int main()
{	
	/*
	 * count white space, digit and other*/
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i=0;i<10;++i)
	{
		ndigit[i] = 0;		
	}
	while((c = getchar()) != EOF)
	{
		if(c>='0'&&c<='9')
		{	
			++ndigit[c-'0'];
		}
		else if(c=='\n'||c=='\t'||c==' ')
			++nwhite;
		else ++nother;
	}

	printf("digits=");
	for(i=0;i<10;i++) printf("%d ",ndigit[i]);
	printf("\nnwhite:%d nother:%d\n",nwhite, nother);
}

