/*practica 9*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int segundos, minutos, horas;
    
    segundos = minutos = horas = 0;
    for(;;)
    {
        if(segundos == 60) {minutos++, segundos = 0;}
        if(minutos == 60) {horas++, minutos = 0;}
        printf("%dh  %d'  %d", horas, minutos, segundos);
        segundos++;
        sleep(1);
    }
    return 0;
}
