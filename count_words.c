#include"stdio.h"
#define IN 1
#define OUT 0
int main()
{	/*count lines, words, and characters in input*/
	int c;
	int nl; //the number of lines
	int nw; //the number of words
	int nc; //the number of char
	int state; //
	nl = nw = nc =0;
	state = OUT;

	while((c = getchar()) != EOF)
	{
		++nc;

		if(c == '\n') ++nl;
	       	if(c == ' '|| c == '\t' || c == '\n')
		{  	state = OUT;

		}
		else if (state == OUT)
		{	state = IN;
			++nw;
		}
		
		if(c == '\n' || c == '\t' || c == ' ') printf("\n");
		else putchar(c);	
	}
	printf("lines: %d, words: %d, char: %d\n", nl, nw, nc);
}
