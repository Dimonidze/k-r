#include <stdio.h>

/* подсчёт строк входного потока; упражнение 1.8 */
main()
{
	int c, 
		nl = 0, 
		sp = 0, 
		tb = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n') ++nl;
		else if (c == '\t') ++tb;
		else if (c == ' ') ++sp;
	printf("%s\t %s\t %s\n", "space`s", "tab`s", "new lines");
	printf("%4d\t %3d\t %5d\n", sp, tb, nl);
}