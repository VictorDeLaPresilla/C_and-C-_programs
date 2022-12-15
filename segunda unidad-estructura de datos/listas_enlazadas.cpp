/*listas enlazadas*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Nodo
{
	int dato;
	Nodo *siguiente;
};
void menu();
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *listas);
void buscarLista(Nodo *,int);
void eliminarNodo(Nodo *&,int);
Nodo *lista=NULL;
int main()
{
	menu();
	getch();
	return 0;
}
void menu()
{
	int opcion;
	do
	{
		cout<<"\t.:Menu:.\n";
		cout<<"1. Insertar elemntos a la lista\n";
		cout<<"2. Mostrar elemento de la lista\n";
		cout<<"3. Buscar un elemento en lista\n";
		cout<<"4. Eliminar un elemnto de la lista\n";
		cout<<"5. Salir\n";
		cout<<"\topcion: ";
		cin>>opcion;
		switch(opcion)
		{
			int dato;
			case 1:
			cout<<"digite un numero: ";
			cin>>dato;
			insertarLista(lista,dato);
			cout<<"\n";
			system("pause");
			break;
			case 2:
			mostrarLista(lista);
			cout<<"\n";
			system("pause");
			case 3:
			cout<<"Digite el numero a buscar\n";
			cin>>dato;
			buscarLista(lista,dato);
			cout<<"\n";
			system("pause");
			break;
			case 4:
			cout<<"digite el elemto a eliminar";
			cin>>dato;
			eliminarNodo(lista,dato);
			cout<<"\n";
			system("pause");
			default:
				cout<<"esa opcion no esta disponible";
		}
		system("cls");
	}
	while(opcion!=5);
}
void insertarLista(Nodo *&lista,int n)
{
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	Nodo *aux1=lista;
	Nodo *aux2;
	while((aux1!=NULL)&&(aux1->dato<n))
	{
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(lista==aux1)
	{
		lista=nuevo_nodo;
	}
	else
	{
		aux2->siguiente=nuevo_nodo;
	}
	nuevo_nodo->siguiente=aux1;
	cout<<"\tElemento "<<n<<" insertado a lista correctamente\n";
}
void mostrarLista(Nodo *lista)
{
	Nodo *actual=new Nodo();
	actual=lista;
	while(actual!=NULL)
	{
		cout<<actual->dato<<"->";
		actual=actual->siguiente;
	}
}
void buscarLista(Nodo *lista,int n)
{
	bool band=false;
	Nodo *actual=new Nodo();
	actual=lista;
	while((actual!=NULL)&&(actual->dato<=n) )
	{
		if(actual->dato==n)
		{
			band=true;
		}
		actual=actual->siguiente;
	}
	if(band==true)
	{
		cout<<"Elemento "<<n<<" SI a sido encontrado en lista\n";
	}
	else
	{
		cout<<"Elemento "<<" No a sido encontrado en lista\n";
	}
}
void eliminarNodo(Nodo *&lista,int n)
{
	if(lista!=NULL)
	{
		Nodo *aux_borrar;
		Nodo *anterior=NULL;
		aux_borrar=lista;
		while((aux_borrar!=NULL)&&(aux_borrar->dato!=n))
		{
			anterior=aux_borrar;
			aux_borrar=aux_borrar->siguiente;
		}
		if(aux_borrar==NULL)
		{
			cout<<" El elemnto no ha sido encontrado";
		}
		else if(anterior==NULL)
		{
			lista=lista->siguiente;
			delete aux_borrar;
		}
		else
		{
			anterior->siguiente=aux_borrar->siguiente;
			delete aux_borrar;
		}
	}	
}
