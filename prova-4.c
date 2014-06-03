#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main() {

		int n=0;
		printf("Quantos números você quer digitar ? \n");
		scanf("%d", &n);
		int x[n];
		int	i=0;
		int	j=0;
		printf("Digite os números... \n");
		while(i<n){
			for(i=0;i<n;i++){
				printf("i = %d \n", i);
				printf("j = %d \n", j);
				for (j=0;j<n;j++){
				printf("i = %d \n", i);
				printf("j = %d \n", j);
				scanf("%d", &x[i]);
				if(i==j){
					printf("Existem números iguais\n");
				}
			}
		
		}
		}
	
		printf("%d \n", n);	
	return 0;
	}