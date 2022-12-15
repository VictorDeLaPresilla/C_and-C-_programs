/*practica 7*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int l,n,d;
	printf("Introduzca limite: ");
	scanf("%l",&l);
	printf("1");
	for(n=2;n<=l;++n);
	{
		for(d=2;n%d!=0;++d)
		{
			if(d==n);
			printf("%i",n);
		}
	}
	system("PAUSE");
	return 0;
}
