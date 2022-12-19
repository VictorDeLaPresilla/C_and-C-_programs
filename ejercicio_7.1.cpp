/*ejercicio 7.1*/
#include <iostream>
using namespace std;

int fact(int);

int main(){
    unsigned int s;
    cout<<"Escriba un numero: ";
    cin>>s;
    double e=0;
    for(unsigned int i=0;i<s;i++){
        double u=fact(i);
        e+=1/u;
    }
    cout<<"\nel valor aproximado de e en base a su numero "<<s<<" es "<<e<<endl;
}

int fact(int f){
    int factorial=f;
    if(factorial>1){
        factorial=f*fact(f-1);
        return factorial;
    }
    else{
        return 1;
    }
}


