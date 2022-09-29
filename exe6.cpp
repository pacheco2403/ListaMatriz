#include <stdio.h>
#include "matrixlib.h"

int main(){
	int mat[100][100],ordem,soma=0;
	int i,j;
	printf("Ordem da matriz:");
	scanf("%d",&ordem);
	carregaMatrix(mat,ordem,ordem);
	printf("*** Matriz ***\n");
	printMatrix(mat,ordem,ordem);
	printf("Diagonal secundaria \n");
	j= ordem-1;
	for(i=0;i<ordem;i++){
		printf("%d |",mat[i][j]);
		soma+=mat[i][j];
		j--;
	}
printf("Soma da Diagonal %d \n",soma);
	return 0;
}
