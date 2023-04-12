#include <stdio.h>

int main(void) {
  int matrix[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
  int matrix2[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
  int matrizSoma[3][3];
  
  int i, j;

  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      if (i == j)
        matrizSoma[i][j] = matrix[i][j] + matrix[i][j];
        printf("Matriz[%d][%d]: %d\n", i, j, matrizSoma[i][j]);
      
      }
  }

  return 0;
}