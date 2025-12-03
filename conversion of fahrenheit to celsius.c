#include <stdio.h>

int main() {
	float f, c;
	printf("Enter temprature in Fahrenheit: ");
	scanf("%f", &f);
	c = (f - 32) * 5 / 9;
	printf("Temprature in Celsius = %f\n", c);
	return 0;
}
