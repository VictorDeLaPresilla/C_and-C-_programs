/*practica 32*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
struct persona
{
	char nombre[40];
	int edad;
	float talla;
};
int main()
{
	struct persona variable;
	pregunta(&variable);
	printf("\nNombre: %s",variable.nombre);
	printf("\nEdad:%d",variable.edad);
	printf("\nAltura%0.2f",variable.talla);
	system("PAUSE");
	return 0;	
}
pregunta(struct persona*p)
{
	printf("Nombre: ");
	gets(p->nombre);
	printf("Edad");
	fflush(stdin);
	scanf("%sd",&p->edad);
	fflush(stdin);
	printf("Altura: ");
	scanf("%f",&p->talla);
	fflush(stdin);
}
