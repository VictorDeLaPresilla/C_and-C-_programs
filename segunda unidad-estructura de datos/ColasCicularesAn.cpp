//cola circular
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <clocale>
#include <string.h>
#include <windows.h>
#define MAXCOLA 5
using namespace std;
struct structCola{
	char nombre[MAXCOLA][50];
	int frente;
	int fin;
};
typedef struct structCola cola;

int colaLlena(cola *miCola){
	if(miCola->fin==MAXCOLA)
		return 1;
	return 0;	
}
int colaVacia(cola *miCola){
	if(miCola->fin==0)
		return 1;
	return 0;
}

int calcularUbicacion(cola *miCola){
	return(miCola->frente+miCola->fin)%MAXCOLA;
}

void crearCola(cola *miCola){
	miCola->fin=0;
	miCola->frente=0;
}
int calcularFrente(cola *miCola){
	return(miCola->frente+1)%MAXCOLA;
}

void push(cola *miCola, char nombre[]){
	int ubicacion;
	ubicacion=calcularUbicacion(miCola);
	strcpy(miCola->nombre[ubicacion],nombre);
	miCola->fin++;	
}

char *pop(cola *miCola){
	char aux[50];
	strcpy(aux,miCola->nombre[miCola->frente]);
	miCola->frente=calcularFrente(miCola);
	miCola->fin--;
	return aux;
}

void mostrarFrente(cola *miCola){
	printf("Frente [%d]-> %s <-Fin [%d]",miCola->frente,miCola->nombre[miCola->frente],calcularUbicacion(miCola)-1);
}

void mostrarCola(cola *miCola){
	cola colaAux;
	char aux[50];
	int ubicacion;
	
	colaAux=*miCola;
	
	if(colaVacia(&colaAux)){
			cout<<"LA COLA ESTÁ VACIA :("<<endl;
	}
	else{
		do{
			ubicacion=colaAux.frente;
			strcpy(aux,pop(&colaAux));
			printf("%s, ",aux);
		}while(!colaVacia(&colaAux));
	}
}

int main(){
	setlocale(LC_CTYPE,"Spanish");
	cola miCola;
	int opcion;
	char nombre[50];
	char *nombreRegreso;
	crearCola(&miCola);
	do{
		system("CLS");
		cout<<"\tMenú\n\n"<<endl;
		cout<<"1. Agregar nombre en la Cola\n";
		cout<<"2. Quitar nombre de la Cola\n";
		cout<<"3. Mostrar frente y final de la Cola\n";
		cout<<"4. Desplegar la Cola\n";
		cout<<"5. Salir\n";
		cout<<"Selecciona una Opción: ";
		cin>>opcion;
		switch(opcion){
			case 1:
				system("CLS");
				if(colaLlena(&miCola)){
					cout<<"LA COLA ESTÁ LLENA, NO SE PUEDEN AGREGAR MÁS ELEMENTOS"<<endl;
				}
				else{
					cout<<"Introduzca el nombre: "<<endl;
					scanf(" %[^\n]",nombre);
					push(&miCola,nombre);
					printf("Se ha insertado %s en la cola",nombre);
				}
			break;
			case 2:
				system("CLS");
				if(colaVacia(&miCola)){
					cout<<"LA COLA ESTÁ VACIA :("<<endl;
				}
				else{
					nombreRegreso=pop(&miCola);
					strcpy(nombre,nombreRegreso);
					printf("Se ha retirado %s de la cola",nombre);
				}
			break;
			case 3:
				system("CLS");
				if(colaVacia(&miCola)){
						cout<<"LA COLA ESTÁ VACIA :("<<endl;
				}
				else{
					cout<<"El frente y final de la cola es:\n";
					mostrarFrente(&miCola);
				}
			break;
			case 4:
				system("CLS");
				mostrarCola(&miCola);
			break;
			case 5:
				cout<<"SALIR"<<endl;
			break;	
		}
		getch();
	}while(opcion!=5);
}
