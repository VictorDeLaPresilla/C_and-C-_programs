
/*pila simple*/
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&pila, int &);

int main(){
	Nodo *pila= NULL;
	int i,dato,c;
	
	cout<<"¿Cuantos elementos hay?"<<endl; cin>>c;
	for(i=0;i<c;i++){
		cout <<"introduce un numero: "<<endl;
		cin>>dato;
		agregarPila(pila, dato);	
	}
	cout <<"--------\nLa pila esta llena\n------------"<<endl;
	
	cout<<"\nSacando elementos de la pila: ";
	while(pila != NULL){
		sacarPila(pila,dato);
		if(pila != NULL){
			cout<<dato<<", ";
		}else{
			cout<<dato<<".";
		}
	}
	return 0;
}
void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo(); 
	nuevo_nodo->dato=n; 	
	nuevo_nodo->siguiente = pila; 
	pila = nuevo_nodo;
	
	cout<<"El elemento "<<n<<" se inserto a la pila"<<endl;
}
void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila; 
	n= aux->dato;
	pila = aux->siguiente;
	delete aux; 
	
}
