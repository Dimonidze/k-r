#include <stdio.h>

/* подсчёт строк входного потока */
main()
{
	int c, 
		nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}