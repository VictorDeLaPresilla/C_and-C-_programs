/*cola simple*/
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void insertarCola(Nodo *&,Nodo *&,int);
void suprimirCola(Nodo *&,Nodo *&,int &);
bool cola_vacia(Nodo *);
int main()
{
	Nodo *frente = NULL;
	Nodo*fin = NULL;
	int dato;
	char a;
	while(true)
	{
		cout<<"Agrega elemento: "<<endl;
		cin>>dato;
		insertarCola(frente,fin,dato);
		cout<<"Agregar otro elemento? Si=s; No=n"<<endl;
		cin>>a;
		if(a=='n')
		{
			goto ya;
		}
	}
	ya:
	cout<<"\nQuitando los datos de la cola"<<endl;
	while(frente != NULL)
	{
		suprimirCola(frente,fin,dato);
		if(frente != NULL)
		{
			cout<<dato<<", ";
		}
		else
		{
			cout<<dato<<".";
		}
	}	
	return 0;
}
void insertarCola(Nodo *&frente,Nodo *&fin,int n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato =n;
	nuevo_nodo->siguiente = NULL;
	if(cola_vacia(frente))
	{
		frente= nuevo_nodo;
	}
	else
	{
		fin->siguiente=nuevo_nodo;
	}
	fin = nuevo_nodo; 
	cout<<"\tAgregaste un elemento"<<endl;
}
void suprimirCola(Nodo *&frente,Nodo *&fin,int &n)
{
	n = frente->dato;
	Nodo *aux =frente;
	if(frente == fin)
	{
		frente = NULL;
		fin = NULL;
	}
	else
	{
		frente = frente->siguiente;
	}
	delete aux;
}
bool cola_vacia(Nodo *frente)
{
	if(frente == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
