#include <stdio.h>
/*Печать таблицы температур*/
main()
{
	float	fahr,	celsius,	kelvin;
	printf("%7s %15s %18s\n", "celsius", "fahr", "kelvin");
	for (celsius = 0.0; celsius <= 100.0; celsius = celsius + 1.0) {
		fahr = 9.0 / 5.0 * celsius + 32.0;
		kelvin = celsius * 273.15;
		printf("%7.2f %15.2f %18.2f\n", celsius, fahr, kelvin);
	}
}