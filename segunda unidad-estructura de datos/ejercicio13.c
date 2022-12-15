/*pracrica 13*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	static int pila[10]={0,1,2,3,4,5,6,7,8,9};
	int i=0;
	printf("LIFO: ");
	for(i=9;i>0;i--)
	{
		printf("%d",pila[i]);
	}
	return 0;
}
