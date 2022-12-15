/*practica 4*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	float s;
	float h,m;
	printf("introduce los segundos a convertir: ");
	scanf("%f",&s);
	h=s/3600;
	m=s/60;
	printf("los segundos son equivalentes a %.4f horas y a %.f minutos y %.f segundos",h,m,s);
	return 0;
}
