#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorielle (int a)
 {
 	int fact,i;
 	fact=1;
 	for(i=2;i<=a;i++)
 	  fact=fact*i;
	return fact;
}    
int main()
{
	int nombre;
	do{
		printf("entrer un nombre pour calcuer sa factorielle\n");
		scanf("%d",&nombre);
	}
	while(nombre<0);
	printf("la factorielle de %d!-%d\n",nombre,factorielle(nombre));
}
