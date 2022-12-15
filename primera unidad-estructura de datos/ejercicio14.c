/*practica 14*/
#include<stdio.h>
#include<conio.h>
int main()
{
	float lista[5], suma=0, max=0, min=0;
	int i=0;
	for(i=0;i<5;++i)
	{ 
		printf("Valor: "); scanf("%f",&lista[i]); 
	}
	max=lista[0]; min=lista[0];
	for(i=0;i<5;++i)
	{
		suma=suma+lista[i];
		if(lista[i]>max) max=lista[i];
		if(lista[i]<min) min=lista[i];
	}
	printf("Media %5.2f\n", suma/5);
	printf("Maximo %5.2f\n", max);
	printf("Minimo %5.2f\n", min);
	system("PAUSE");
	return 0;
}

