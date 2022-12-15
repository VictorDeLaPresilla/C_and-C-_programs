/* Práctica 31*/
#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
int disp, cont, i;
if(argc<2)
{
printf("Se debe introducir la longitud del contador\n");
printf("en la linea de ordenes. Intentelo de nuevo.\n");
exit(0);
}
if(argc==3 && !strcmp(argv[2],"visualiza")) disp=1;
else disp=0;
cont=atoi(argv[1]);
for(i=0;i<=cont;++i)
{if(disp) printf("%d\r", i); sleep (1000); }
printf("%c",7);
system("PAUSE");
return 0;
}
