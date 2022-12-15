/*practica 12*/
#include<stdio.h>
#include<stdlib.h>
#define euro 166.386
int main()
{
	int a;
	do
	{
	
	float n, x;
	int opcion;
	printf("La cantidad: "); scanf("%f", &n);
	printf("1-Ptas a Euros 2-Euros a Ptas "); scanf("%d",&opcion);
	switch(opcion) 
	{
	case 1: x=n/euro;
	printf("%0.2f pesetas son %0.2f euros\n",n,x);
	 break;
	case 2: x=n*euro;
	printf("%0.2f euros son %0.2f pesetas\n",n,x); 
	break;
	default: 
	printf("incorrecta la opcion tecleada\n");
	printf("desea continuar\n a=1  a=0");
	scanf("%i",&a);
	}
	printf("desea continuar\n a=1  a=0");
	scanf("%i",&a);
	system("cls");
	}
	while(a!=0);
	
	system("PAUSE");
	return 0;
}
