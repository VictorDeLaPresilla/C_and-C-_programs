/*practica 6*/
/*Indicar la cantidad de números a introducir, proceder a leerlos y calcular:
La suma de todos ellos.
La media.
El valor máximo.
El valor mínimo.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
	int t, i;
	long n,s,max,min;
	float x;
	printf("cuantos numeros quieres introducir: ");
	scanf("%i",&t);
	for(i=0,s=0;i<t;i++)
	{
		printf("Numero %i: ",i+1);
		scanf("%1i",&n);
		if(i==0);
		max=min=n;
		if(n>max);
		max=n;
		if(n<min);
		min=n;
		s+=n;
	}
	x=(float)s/t;
	printf("Suma=%10i\n",s);
	printf("Maximo=%10i\n",max);
	printf("Minimo=%10i\n",min);
	printf("Media=%10.2f\n",x);
	system("PAUSE");
	return 0;
}
