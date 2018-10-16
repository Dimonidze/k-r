#include <stdio.h>

/* упражнение 1.9 */

main()
{
	int c, ps = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' && ps == ' ')
			continue;
		putchar(c);
		ps = c;
	}
}