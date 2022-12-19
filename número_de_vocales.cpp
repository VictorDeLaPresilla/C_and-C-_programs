/*7.4.*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
char palabra[40];
int a,b;
main(){
cout<<"ingrese la palabra :";
gets(palabra);
for(a=0;a<40;a++){
switch (palabra[a]){
case 'a': b=b+1;
break;
case 'e': b=b+1;
break;
case 'i': b=b+1;
break;
case 'o': b=b+1;
break;
case 'u': b=b+1;
break;
} }
cout<<"\nel numero de vocales son\n"<<b;
getch();
return 0;
}
