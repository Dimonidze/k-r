#include <stdio.h>
main()
{
	float fahr, celsius, kelvin;
	int lower, upper, step;
	lower = 0.0;
	upper = 100.0;
	step = 5.0;
	celsius = lower;
	printf("%7s %15s %18s\n", "celsius", "fahr", "kelvin");
	while (celsius <= upper) {
		fahr = 9.0 / 5.0 * celsius + 32.0;
		kelvin = celsius * 273.15;
		printf("%7.2f %15.2f %18.2f\n", celsius, fahr, kelvin);
		celsius = celsius + step;
	}
}