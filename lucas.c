#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int main() { 
		int x, y, total;
		printf("Digite um numero \n");
		scanf("%d", &x);
		for (y=0;y<=10;y++) { 
 		total=x*y;
printf("O resultado de %d x %d é %d \n",  y,x,total);
 } 
return 0;
} 
