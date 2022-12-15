/*practica 18*/
#include<stdio.h>
#include<stdlib.h>
int n[20]={3,4,5,1,2,8,9,6,7,8,12,10,11,2,1,0,4,3,2,15};
main()
{
	int i,j,k=0;
	int *po; po=&n[0];
	printf("Lista original: ");
	for(i=0;i<20;++i) printf("%d ", *(po+i));
	for(i=0;i<19;++i)
	{
		for(j=i+1;j<20;++j)
		if(*(po+i)>*(po+j))
		{
		k=*(po+i); *(po+i)=*(po+j); *(po+j)=k;
		}
	}
	printf("\nLista ordenada: ");
	for(i=0;i<20;++i) printf("%d ", *(po+i));
	system("PAUSE");
	return 0;
}

