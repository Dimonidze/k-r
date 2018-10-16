#include <stdio.h>

/* копирование ввода на вывод, 2-я версия */
main()
{
	int c;
	
	c = (getchar() != EOF);
	putchar(c);
}