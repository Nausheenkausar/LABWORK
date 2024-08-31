#include <stdio.h>
#include <stdlib.h>

//multiplicsation of two matrices

int main() {
	int i,j,row,col;
	printf("enter the number of row and col:\n");
	scanf("%d %d",row,col);
	int matrix1[row][col],matrix2[row][col],product[row][col];
	
	
	printf("enter the element of matrix1:\n");
	for(i=0;i<=row;i++){
		for(j=0;j<=col;j++){
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("enter the element of matrix2:\n");
	for(i=0;i<=row;i++){
		for(j=0;j<=col;j++){
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(i=0;i<=row;i++){
		for(j=0;j<=col;j++){
			product[i][j] +=matrix1[i][j]*matrix2[i][j];
		}
	}
	return 0;
}
