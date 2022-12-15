/*practica 10*/
#include<stdio.h>
#include<stdlib.h>
#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))
int main()
{
	float x, y;
	printf("Primer valor: "); 
	scanf("%f", &x);
	printf("Segundo valor: ");
	scanf("%f", &y);
	printf("El maximo de %f y %f es: %f\n", x, y, MAX(x,y));
	system("PAUSE");
	return 0;
}
