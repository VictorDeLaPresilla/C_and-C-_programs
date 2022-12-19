#include <iostream>
#define DIM 10
#include <cstdio>
using namespace std;
 
int main(int argc, char *argv[]) {
    int vector[DIM],i,x;
    
    //se completa el vector con datos
    for (i=0; i<DIM; i++)
        vector[i]= i+1;
    
    printf("\nInsertar un numero del 1 al 10 para buscar:");
    scanf("%d",&x);
    
    //se busca de forma secuencial y se muestra la posicion en la 
    //que se encuentra el numero, comenzando desde 0
    for(i=0;i<DIM;i++)
        if(vector[i]==x){
            printf("%s", "\nEL numero se encuentra en la posicion ");
            printf("%d", i);
        }
    
    return 0;
}
