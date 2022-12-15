/*practica 11*/
#include<stdio.h>
#include<stdlib.h>
#define ABS(X) ((X) <0 ? -(X) : (X))
main()
{
	float x;
	printf("Valor: ");scanf("%f", &x);
	printf("El valor absoluto de %f es: %f\n", x, ABS(x));
	system("PAUSE");
	return 0;
}
