/* Práctica 30*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c=' ';
	while(c!='s')
{
	menu1();
	c=getch();fflush(stdin);
	switch(c)
{
	case 'p': menu2(); peri(); break;
	case 'a': menu2(); area(); break;
	case 's': exit(0);
}
}
	system("PAUSE");
	return 0;
}
menu1()
{
borra_pantalla();
printf("(P)Perimetros\n");
printf("(A)Areas\n");
printf("(S)Salir\n");
}
menu2()
{
borra_pantalla();
printf("(C)Cuadrado\n");
printf("(T)Triangulo\n");
printf("(O)Circulo\n");
printf("(R)Retornar\n");
}
peri()
{
char c;
c=getch();fflush(stdin);
switch(c)
{
case 'c': pecua(); break;
case 't': petri(); break;
case 'o': pecir(); break;
case 'r': return(0);
}
}
area()
{
char c;
c=getch();fflush(stdin);
switch(c)
{
case 'c': arecua(); break;
case 't': aretri(); break;
case 'o': arecir(); break;
case 'r': return(0);
}
}
pecua()
{
float lado;
borra_pantalla();
printf("Dame el lado del cuadrado: "); scanf("%f",&lado);
printf("EL perimetro del cuadrado de lado %0.2f es %0.2f\n", lado, 4*lado);
printf("Pulse una tecla para continuar...");
getch();
}
petri()
{
int i;
float a[3];
borra_pantalla();
for(i=0;i<3;i++)
{
printf("Dame el lado %d: \n", i+1);
scanf("%f",&a[i]);fflush(stdin);
}
printf("El perimetro del triangulo de lados %0.2f %0.2f y %0.2f es %0.2f\n",a[0],a[1],a[2],a[0]+a[1]+a[2]);
printf("Pulse una tecla para continuar...");
getch();
}
pecir()
{
float radio;
borra_pantalla();
printf("Dame el radio del circulo: "); scanf("%f",&radio);fflush(stdin);
printf("EL perimetro del circulo de radio %0.2f es %0.2f\n", radio, 2*3.141592*radio);
printf("Pulse una tecla para continuar...");
getch();
}
arecua()
{
float lado;
borra_pantalla();
printf("Dame el lado del cuadrado: "); scanf("%f",&lado);fflush(stdin);
printf("EL area del cuadrado de lado %0.2f es %0.2f\n", lado, lado*lado);
printf("Pulse una tecla para continuar...");
getch();
}
aretri()
{
float base, altura;
borra_pantalla();
printf("Dame la base del triangulo: "); scanf("%f",&base);fflush(stdin);
printf("Dame la altura del triangulo: "); scanf("%f",&altura);fflush(stdin);
printf("El area del triangulo de base %0.2f y altura %0.2f es %0.2f\n",base,altura,base*altura/2);
printf("Pulse una tecla para continuar...");
getch();
}
arecir()
{
float radio;
borra_pantalla();
printf("Dame el radio del circulo: ");
 scanf("%f",&radio);
 fflush(stdin);
printf("EL area del circulo de radio %0.2f es %0.2f\n", radio, 3.141592*radio*radio);
printf("Pulse una tecla para continuar...");
getch();
}
borra_pantalla() { system("cls"); }

