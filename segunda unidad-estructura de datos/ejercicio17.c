/*practica 17*/
#include<stdio.h>
#include<stdlib.h>
int e[10]={1,2,3,4,5,6,7,8,9,0};
int s[10]={11,22,33,44,55,66,77,88,99,00};
int main()
{
	int *ee,*ss, dato=0,x=0;
	ee=&e[0];
	ss=&s[0];
	for(x=0;x<10;++x)
	{
		do
		{
			printf("Valor de entrada: ");
			scanf("%d",&dato);
			
		}
	while(dato!=*(ee+x));
			printf("\nSalida=%d\n",*(ss+x));
	}
		system("PAUSE");
		return 0;
	
}
