#include <stdio.h>

int main() {
  int matrix1[3][3] = { {6, 5, 12}, {1, 6, 85}, {15, 25, 30} };
  int matrix2[3][3] = { {1, 4, 2}, {3, 6, 8}, {1, 7, 4} };
  int matrixSoma[3][3];

  int i, j;
  printf("Matriz =\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf(" %d", matrix1[i][j]);
    }
    printf("\n");
    
  }
  
  printf("\n\n Matriz =\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf(" %d", matrix2[i][j]);
    }
    printf("\n");
    
  }
  
  printf("\n\n MatrizSoma =\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
    matrixSoma[i][j] = matrix1[i][j] + matrix2[i][j];
      printf(" %d", matrixSoma[i][j]);
    }
    printf("\n");
    }
  return 0;
}
