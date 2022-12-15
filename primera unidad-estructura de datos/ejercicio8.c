/*practica 8*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int ch=0, nc=0, nl=0, np=0, palabra=0;
	while(ch!=EOF)
	{
		ch=getchar();
 		putchar(ch);
  		++nc;
		if(ch=='\n') ++nl;
		if(ch!=' ' && ch!='\n' && palabra==0) { ++np; palabra=1; }
		if((ch==' ' || ch=='\n') && palabra==1) palabra=0;
	}
		printf("Numero de caracteres: %d\n", nc);
		printf("Numero de lineas: %d\n", nl);
		printf("Numero de palabras: %d\n", np);
		system("PAUSE");
		return 0;
}
