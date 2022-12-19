#include<iostream>
using namespace std;
void Burbuja(int [] , int );
void Imprimir(int [] , int );
int main()
{
	int a[]={45,3,5,6,76,345,23,23,5,8};
    Burbuja(a,10);
    Imprimir(a,10);
}
void Burbuja(int a[] , int n)
{
	int aux , i ,j;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            if(a[j-1]>a[j])
            {
                aux=a[j-1];
                a[j-1]=a[j];
                a[j]=aux;
			}
		}
	}
}
void Imprimir(int a[] , int n)
{
    cout<<"Numeros Ordenados de Menor a Mayor"<<endl;
	for(int i=0;i<n;i++)
        cout<<"[ "<<a[i]<<" ]";
}
