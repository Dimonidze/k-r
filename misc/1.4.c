#include <stdio.h>

#define LOWER	0.0		/* нижняя  граница таблицы */
#define UPPER	100.0	/* верхняя граница таблицы */
#define STEP	1.0		/* размер  шага */

/*Печать таблицы температур*/
main()
{
	float	fahr,	celsius,	kelvin;
	printf("%7s %15s %18s\n", "celsius", "fahr", "kelvin");
	for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP) {
		fahr = 9.0 / 5.0 * celsius + 32.0;
		kelvin = celsius * 273.15;
		printf("%7.2f %15.2f %18.2f\n", celsius, fahr, kelvin);
	}
}