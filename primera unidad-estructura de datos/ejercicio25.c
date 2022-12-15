/*practica 25*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char nombre[20][20];
int main()
{
	char ch;
	for(;;)
	{
		borra_pantalla();
		gotoxy(30,10); puts("(I)ntroducir nombres.");
		gotoxy(30,0);puts("(L)istar nombres.");
		gotoxy(30,0);puts("(O)rdenar nombres.");
		gotoxy(30,0);puts("(B)uscar nombre.");
		gotoxy(30,0);puts("(S)alir al sistema.");
		gotoxy(30,2); puts("Seleccione opcion: ");
		do ch=toupper(getch());
		while(ch!='I' && ch!='L' && ch!='O' && ch!='B' && ch!='S');
		switch(ch)
	{
		case 'I': intro(); break;
		case 'L': listar(); break;
		case 'O': orden(); break;
		case 'B': buscar(); break;
		case 'S': exit(0);
	}
}
	system("PAUSE");
	return (0);
}
	borra_pantalla()
{
	system("cls");
}
	gotoxy(int x, int y)
{
	for(;y;--y) printf("\n");
	for(;x;--x) printf(" ");
}
	intro()
{
	int i;
	borra_pantalla();
	for(i=0;i<20;++i)
	nombre[i][0]='\0'; i=0;
	puts("Introducir nombres. Pulse INTRO para terminar.");
	puts("------------------------------------------------");
	while(i<20)
{
	printf("Nombre: "); gets(nombre[i]);
	if(!nombre[i][0]) return (0);
	strupr(nombre[i]);
	i++;
}
}
	listar()
{
	int i=0;
	borra_pantalla();
	puts("Litar los nombres introducidos.");
	puts("-------------------------------");
	while(i<20)
{
	puts(nombre[i]);
	i++;
}
	puts("Pulse una tecla para continuar");
	getch();
}
	orden()
{
	borra_pantalla();
	qsort(nombre,20,20,strcmp);
	puts("Pulse una tecla para continuar");
	getch();
}
	buscar()
{
	char busca[20], *p;
	qsort(nombre,20,20,strcmp);
	borra_pantalla();
	printf("Nombre a buscar: ");gets(busca); strupr(busca);
	p=(char *)bsearch(busca,nombre,20,20,strcmp);
	if(*p==*busca)
	puts("Localizado");
	else
	puts("No localizado");
	puts("Pulse una tecla para continuar");
	getch();
}
