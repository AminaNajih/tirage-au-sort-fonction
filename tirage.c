#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int nb,i,fact;
	fact=1;
	printf("entrer un nombre \n");
	scanf("%d",&nb);
	if(nb<0) printf("op impossible");
	else {
		for(i=1;i<nb+1;i++)
		{
			fact=fact*i;
     	}
		printf("le reusltat est %d",fact);          
  	} 
    
	return 0;  
}


