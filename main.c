#include <stdio.h>

int main() {
	float gFloat=1.234567;
	float bFloat=1.23456789123;
	char gChar=123;
	char bChar=129;
	int symbol=123;
	unsigned char gUn=200;
	unsigned char bUn=-2;

	printf("float in bounds: %lf\n", gFloat);
	printf("float out of bounds: %lf\n", bFloat);
	printf("char in bounds: %d\n", gChar);
	printf("char out of bounds: %d\n", bChar);
	printf("char in bounds as a symbol: %c\n", gChar);
	printf("char out of bounds as a symbol: %c\n", bChar);
	printf("int as a symbol: %c\n", symbol);
	printf("unsigned char: %d\n", gUn);
	printf("unsigned char out of bounds: %d\n", bUn);
}

	