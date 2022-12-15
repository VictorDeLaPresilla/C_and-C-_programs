#include<stdio.h>
#include<stdlib.h>

#include<conio.h>
main()
{
	char final[60], *primer, *segund;
	primer="Todos para Uno ";
	segund="y Uno para Todos";
	strcat(final,primer);
	strcat(final,segund);
	puts(final);
	system("PAUSE");
	return (0);
}
