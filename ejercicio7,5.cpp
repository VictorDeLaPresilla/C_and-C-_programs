/*7.5*/
#include <iostream>
using namespace std;
int producto(int, int);
int main()
{
 int n1,n2,p;

 cout << "Introduzca primer numero: ";
 cin >> n1;
 cout << "Introduzca segundo numero: ";
 cin >> n2;
 p=producto(n1,n2);
 cout << "producto: " << p << endl;
 system("pause");

}

int producto(int a, int b)
{
 if(a==0 or b==0)
   return 0;
  else
   {
    return a+producto(a,b-1);
   }
}
