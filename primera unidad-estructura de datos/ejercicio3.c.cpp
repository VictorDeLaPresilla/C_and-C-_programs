/*ejercicio 3*/
/*introducir un car�cter por teclado y mostrar en pantalla:
	-El car�cter introducido.
	-El valor decimal del car�cter introducido.
	-El valor haxadecimal del car�cter introducido
	-El valor octal del car�cter introducido.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{

	char ASCII;
	int a,res,n,decimal,oc,i=1;
	printf("\t\t\t\t\tintroduzca un caracter: ");
	scanf("%c",&ASCII);
	printf("el caracter es: %c\n",ASCII);
	printf("el valor en decimal del caracter es: %i\n",ASCII);
	printf("el valor en hexadecimal es:%x\n",ASCII);
	printf("el valor en octal de %i es:%O\n ",ASCII);
	
}


