#include <stdio.h>

int main(void) {
  int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  int i, j;

  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      if (i == j)
        printf("Matriz[%d][%d]: %d\n", i, j, matrix[i][j]);
      
      }
  }

  return 0;
}