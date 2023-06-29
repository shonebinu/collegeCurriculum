#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main()
{
  int matrix[MAX_ROWS][MAX_COLS];
  int rows, cols, scalar, i, j, count = 0;

  printf("Enter number of rows: ");
  scanf("%d", &rows);
  printf("Enter number of columns: ");
  scanf("%d", &cols);

  printf("Enter elements of matrix: \n");
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("Enter scalar: ");
  scanf("%d", &scalar);

  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      if (matrix[i][j] == scalar)
      {
        count++;
      }
    }
  }

  if (count == 0)
  {
    printf("Scalar not found in the matrix.\n");
    printf("Original matrix: \n");
    for (i = 0; i < rows; i++)
    {
      for (j = 0; j < cols; j++)
      {
        printf("%d ", matrix[i][j]);
      }
      printf("\n");
    }
    for (i = 0; i < rows; i++)
    {
      for (j = 0; j < cols; j++)
      {
        matrix[i][j] *= scalar;
      }
    }
    printf("Matrix after scalar multiplication: \n");
    for (i = 0; i < rows; i++)
    {
      for (j = 0; j < cols; j++)
      {
        printf("%d ", matrix[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("Scalar found %d times in the matrix.\n", count);
  }

  return 0;
}
