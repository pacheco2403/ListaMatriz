#include <stdio.h>
#include "matrixlib.h"

int main(){
	int mat[100][100], lin,cols,res;
	int i,j;
	printf("Qtde de lin e cols:");
	scanf("%d%d",&lin,&cols);
	carregaMatrix(mat,lin,cols);
	printf("*** Matriz ***\n");
	printMatrix(mat,lin,cols);
	res=menorMatrix(mat,lin,cols);
	printf("Menor valor: %d\n",res);
	return 0;
}
