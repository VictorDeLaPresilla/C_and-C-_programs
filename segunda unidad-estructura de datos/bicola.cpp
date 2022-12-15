#include <stdio.h>
#include <stdlib.h>
#include <clocale>
struct INFO{
 int num;
};
struct NODO{
	 struct INFO elemento;
	 struct NODO *p_anterior;
	 struct NODO *p_siguiente;
};
 struct BICOLA{
	 int nodos;
	 struct NODO *primero;
	 struct NODO *ultimo;
};
void inicializarBicola( struct BICOLA **bicola ){
	 struct BICOLA *temp = (struct BICOLA *) malloc(sizeof(struct BICOLA));
	 temp->nodos = 0;
	 temp->primero = NULL;
	 temp->ultimo = NULL;
	 (*bicola) = temp;
};
void insertIzqBicola( struct BICOLA **bicola, int dato ){
	 
	 struct NODO *temp = (struct NODO *) malloc(sizeof(struct NODO));
	
	 if( (*bicola)->primero == NULL ) {
		 temp->elemento.num = dato; 
		 temp->p_anterior = NULL; 
		 temp->p_siguiente = NULL;
		 (*bicola)->primero = temp; 
		 (*bicola)->ultimo = temp;
	 }else{
		 temp->elemento.num = dato; 
		 temp->p_anterior = NULL; 
		 temp->p_siguiente = (*bicola)->primero; 
		 (*bicola)->primero->p_anterior = temp; 
		 (*bicola)->primero = temp; 
		 };
		 (*bicola)->nodos += 1; 
};
void insertDerBicola( struct BICOLA **bicola, int dato ){
	 struct NODO *temp = (struct NODO *) malloc(sizeof(struct NODO));
	
	 if( (*bicola)->primero == NULL ){
		 temp->elemento.num = dato;
		 temp->p_anterior = NULL;
		 temp->p_siguiente = NULL;
		 (*bicola)->primero = temp;
		 (*bicola)->ultimo = temp;
	 }else{
		 temp->elemento.num = dato;
		 temp->p_anterior = (*bicola)->ultimo;
		 temp->p_siguiente = NULL;
		 (*bicola)->ultimo->p_siguiente = temp;
		 (*bicola)->ultimo = temp;
	 };
	 (*bicola)->nodos += 1;
};
void eliminaIzqBicola( struct BICOLA **bicola ){
	 struct NODO *aBorrar;
	 if( (*bicola)->primero == NULL ){
	 	printf( "No puede eliminar Nodos de una Bicola vacía." );
	}else if( (*bicola)->nodos == 1 ){
		 free(*bicola);
		 inicializarBicola( bicola );
	 }else if( (*bicola)->nodos > 1 ){ 
			 aBorrar = (*bicola)->primero;
			 (*bicola)->primero->p_siguiente->p_anterior = NULL;
			 (*bicola)->primero = (*bicola)->primero->p_siguiente;
			 free(aBorrar);
			 (*bicola)->nodos -= 1;
	 };
};
void eliminaDerBicola( struct BICOLA **bicola ){
	 struct NODO *aBorrar;
	 if( (*bicola)->primero == NULL ){
	 	printf( "No puede eliminar Nodos de una Bicola vacía." );
	 }else if( (*bicola)->nodos == 1 ){
		 free(*bicola);
		 inicializarBicola( bicola );
	 }else if( (*bicola)->nodos > 1 ){
		 aBorrar = (*bicola)->ultimo;
		 (*bicola)->ultimo->p_anterior->p_siguiente = NULL;
		 (*bicola)->ultimo = (*bicola)->ultimo->p_anterior;
		 free(aBorrar);
		 (*bicola)->nodos -= 1;
	 };
};
int tieneNodosLaBicola( struct BICOLA **bicola ){
	 int resp = 0;
	 if( (*bicola)->nodos != 0 )
	 resp = 1;
	 return resp;
}; 

void borraLaBicola( struct BICOLA **bicola ){
	 struct NODO *actual, *siguiente;
	 actual = (*bicola)->primero; 
	 while( actual != NULL ){
	 siguiente = actual->p_siguiente;
	 free(actual);
	 actual = siguiente;
	 };
	 *bicola = NULL;
};

int cuantosNodosTieneLaBicola( struct BICOLA **bicola ){
 return (*bicola)->nodos;
};

void copiarLaBicola( struct BICOLA **bicolaA, struct BICOLA **bicolaB ){
	 struct NODO *temp = (*bicolaA)->primero;
	 if( (*bicolaB)->primero != NULL ) {
		 borraLaBicola( bicolaB ); 
		 inicializarBicola( bicolaB );
	 };
	 if( temp == NULL )printf( "La Bicola A no contiene Nodos, no se puede copiar nada." );
	 else{
	 	while( temp != NULL ){
		 
		 insertDerBicola( bicolaB, temp->elemento.num );
		 
		 temp = temp->p_siguiente;
		 };
	 };
};

int sonIgualesLasBicolas( struct BICOLA **bicolaA, struct BICOLA **bicolaB ){
	 struct NODO *bicA = (*bicolaA)->primero;
	 struct NODO *bicB = (*bicolaB)->primero;
	 int salirBucle=0, resp=1;
	 if( bicA == NULL ||  bicB == NULL ){
	 	resp = 0;
	 if( bicA == NULL )
	 	printf( "Debe de insertar antes algún Nodo en la Bicola A\n" );
	 if( bicB == NULL )
	 	printf( "Debe de insertar antes algún Nodo en la Bicola B\n" );
	 }else{
		 while( !salirBucle ){
		 if( bicA->elemento.num != bicB->elemento.num ){
			 resp = 0;
			 salirBucle = 1;
		 }else{
			 bicA = bicA->p_siguiente;
			 bicB = bicB->p_siguiente;
					 if( (bicA != NULL  &&  bicB == NULL)  ||  (bicA == NULL  &&  bicB != NULL) ) {
						 resp = 0;
						 salirBucle = 1;
					 }else if( (bicA == NULL  &&  bicB == NULL) ){ 
					 	salirBucle = 1;
		 			};
		 		};
		 	};
	 };
	 return resp;
};

void imprimeBicola( struct BICOLA **bicola ){
	 struct NODO *bic = (*bicola)->primero;
	 if( bic == NULL )
	 	printf( "La Bicola no contiene Nodos." );
	 else{
	 	printf( "Su Bicola contiene: " );
	 while( bic != NULL ){
		 printf( "%i, ", bic->elemento.num );
		 bic = bic->p_siguiente;
	 };
	 printf( "\n\n" );
	};
};
main(){
	setlocale(LC_CTYPE,"Spanish");
	enum opciones{ salir, insertIzq, insertDer, eliminaIzq, eliminaDer, impIzq, impDer, impTodos, quedanNodos, cuantosNodosHay, copiaBicola, sonBicolasIguales, borraBicola } opc;
	struct BICOLA *bicolaA;
	struct BICOLA *bicolaB;
	int eleccion, nuevoDato;
	 inicializarBicola( &bicolaA );
	 inicializarBicola( &bicolaB );
	 do{
		printf( "\n\nIndique que desea hacer con los Nodos de la Bicola:\n\n" );
		printf( "   1. Añadir un Nodo por la izquierda\n" );
		printf( "   2. Añadir un Nodo por la derecha\n" );
		printf( "   3. Eliminar el primer Nodo\n" );
		printf( "   4. Eliminar el ultimo Nodo\n" );
		printf( "   5. Mostrar el primer Nodo\n" );
		printf( "   6. Mostrar el ultimo Nodo\n" );
		printf( "   7. Muestra todos los Nodos\n" );
		printf( "   8. %cQuedan Nodos?\n",168);
		printf( "   9. Cuantos Nodos hay?\n" );
		printf( "  10. Copiar BicolaA a una nueva BicolaB\n" );
		printf( "  11. %cBicola A es igual que BicolaB?\n",168 );
		printf( "  12. Borrar la Bicola A\n\n" );
		printf( "   0. Salir del programa.\n" );
		do{
		 scanf( "%i", &eleccion );
		}while( eleccion < 0  &&  eleccion > 12 );
		opc = (enum opciones)(eleccion);
		printf( "\n\n" );
		switch( opc ){
			case insertIzq:
				printf( "Introduzca el número entero que contendrá el nuevo Nodo de la Bicola: " );
				scanf( "%i", &nuevoDato );
				insertIzqBicola( &bicolaA, nuevoDato );
				break;
			case insertDer:
				printf( "Introduzca el número entero que contendrá el nuevo Nodo de la Bicola: " );
				scanf( "%i", &nuevoDato );
				insertDerBicola( &bicolaA, nuevoDato);
				break;
			case eliminaIzq:
				eliminaIzqBicola( &bicolaA );
				break;
			case eliminaDer:
				eliminaDerBicola( &bicolaA );
				break;
			case impIzq:
				if( tieneNodosLaBicola( &bicolaA ) )
				printf( "El primer Nodo contiene un: %i\n", bicolaA->primero->elemento.num );
				else
				printf("La Bicola no contiene Nodos");
				break;
			case impDer:
				if( tieneNodosLaBicola( &bicolaA ) )
				printf( "El ultimo Nodo contiene un: %i\n", bicolaA->ultimo->elemento.num );
				else
				printf("La Bicola no contiene Nodos");
				break;
			case impTodos:
				imprimeBicola( &bicolaA );
				break;
			case quedanNodos:
				if( tieneNodosLaBicola( &bicolaA ) )
				printf( "La Bicola contiene Nodos." );
				else
				printf( "La Bicola esta vacía." );
				break;
			case cuantosNodosHay:
				printf( "La Bicola contiene %i Nodos.",  cuantosNodosTieneLaBicola( &bicolaA ) );
				break;
			case copiaBicola:
				copiarLaBicola( &bicolaA, &bicolaB );
				break;
			case sonBicolasIguales:
				if( sonIgualesLasBicolas( &bicolaA, &bicolaB ) )
				printf( "Las Bicolas son idénticas" );
				else
				printf( "Las Bicolas son diferentes" );
				break;
			case borraBicola:
				borraLaBicola( &bicolaA );
				inicializarBicola( &bicolaA ); 
				break;
			case salir:
				system("cls");
				break;
		};
	 } while( opc != salir );
	borraLaBicola( &bicolaA );
	borraLaBicola( &bicolaB );
};
