/*practica 20*/
#include<stdio.h>
#include<stdlib.h>
char matriz[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' ',};
main()
{
	char done;
	borra_pantalla();
	printf("gato \n");

	done=' ';
	do
	{
		disp_matriz();
		coge_mov_jugador();
		done=check();
		if(done!=' ')break;
		coge_mov_computa();
		done=check();
	}
	while(done==' ');
	if(done=='X') printf("Usted gana  !\n");
	else printf("Yo gano ..... !\n");
	disp_matriz();
	system("PAUSE");
	return 0;
}
	borra_pantalla()
	 { 
	 system("cls");
	  }
		disp_matriz()
{
	int i, t;
	for(t=0;t<3;t++)
	{
		printf(" %c | %c | %c ",matriz[t][0], matriz[t][1], matriz[t][2]);
		if(t!=2) printf("\n---|---|---\n");
	}
	printf("\n");
}
coge_mov_jugador()
{
	int x,y;
	int ok=0;
	printf("Introduce las coordenadas para X: ");
	do
	{
		scanf("%d %d",&x,&y);
		x--;y--;
		if(matriz[x][y]!=' ')
		printf("Movimiento invalido, intentelo otra vez.\n");
	else
	{
		matriz[x][y]='X';
		ok=1;
	}
}
	while(!ok);
}
	check()
{
	int t;
	char *p;
	for(t=0;t<3;t++)
{
	p=&matriz[t][0];
	if(*p==*(p+1) && *(p+1)==*(p+2)) return *p;
}
	for(t=0;t<3;t++)
	if(matriz[0][t]==matriz[1][t] && matriz[1][t]==matriz[2][t]) return matriz[0][t];
	if(matriz[0][0]==matriz[1][1] && matriz[1][1]==matriz[2][2]) return matriz[0][0];
	if(matriz[0][2]==matriz[1][1] && matriz[1][1]==matriz[2][0]) return matriz[0][2];
	return ' ';
}
	coge_mov_computa()
{
	int i, t;
	for(t=0;t<3;t++)
	{
	for(i=0;i<3;i++)
	if(matriz[t][i]==' ') break;
	if(matriz[t][i]==' ') break;
	}
	if(t*i==9)
{
	printf("Tablas......\n");
	exit(0);
}
	else matriz[t][i]='O';
}

