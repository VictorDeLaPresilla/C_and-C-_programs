/*ejercicio 24*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	static char *uni[10]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
	static char *dec[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	static char *cen[10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
	static char *mil[4]={"","M","MM","MMM"};
	char **indice[4];
	int num, lon, lonfi, b;
	char numero[5], otro[3];
	indice[0]=&uni[0];
	indice[1]=&dec[0];
	indice[2]=&cen[0];
	indice[3]=&mil[0];
	borra_pantalla();
	printf("Introduce un numero decimal y lo veras en el sistema de numeracion romano: ");
	scanf("%d",&num);
	lon=strlen(itoa(num,numero,10));
	lonfi=lon;
	for(;lon>0;lon--)
	{
		otro[0]=numero[lonfi-lon];
		b=atoi(otro);
		printf("%s", *(indice[lon-1]+b));
	}
	printf("\n\n");
	system("PAUSE");
return (0);
}
borra_pantalla() { system("cls"); }
