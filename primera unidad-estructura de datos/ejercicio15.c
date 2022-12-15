/* Práctica 15*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int tabla[4][4], i, j;
	for(i=0;i<4;++i) tabla[i][3]=tabla[3][i]=0;
	printf("Introduce la tabla de 3x3 elementos:\n\n");
	for(i=0;i<3;++i)
	for(j=0;j<3;++j)
	{
		printf("Elemento (%d,%d): ",i+1, j+1);
		scanf("%d",&tabla[i][j]);
		tabla[i][3]+=tabla[i][j];
		tabla[3][j]+=tabla[i][j];
		tabla[3][3]+=tabla[i][j];
	}
	for(i=0;i<4;++i)
	for(j=0;j<4;++j)
	
	printf("%3d%c", tabla[i][j], (j==3) ? '\n' : ' ');
	system("PAUSE");
	return 0;
}
