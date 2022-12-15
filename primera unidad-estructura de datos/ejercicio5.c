/*practica 5*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,n2;
	long suma=0;
	do
	{
		printf("Introduce un numero mayor que 01 y menor que 100: ");
		scanf("%d",&n);
	}
	while(n<=1||n>=100);
	n2=n;
	printf("la suma de 1 a %d es: ",n2);
	while(n>0)
	suma+=n--;
	printf("%d\n",suma);
	printf("la suma de 1 a %d es: ",n2);
	for(n=n2,suma=0;n>0;suma+=n--)
	{
		printf("%d\n",suma);
		printf("la suma de 1 a %d es: ",n2);
		n=n2;
		suma=0;
		do
		{
			suma+=n--;
		}
		while(n>0);
		printf("%1d\n",suma);
		system("PAUSE");
		return 0;
	}
}
