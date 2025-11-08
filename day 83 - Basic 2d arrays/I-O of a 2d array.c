#include <stdio.h>

int main()
{
    int rows, col, i, j;

    printf("Enter number of rows : ");
    scanf("%d", &rows);
    printf("Enter number of columns : ");
    scanf("%d", &col);

    int arr[rows][col];
    printf("Enter elements of the 2D array: \n");
    
    for (i = 0; i < rows; i++)
	{
        for (j = 0; j < col; j++)
		{
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The 2D array is : \n");
    for (i = 0; i < rows; i++)
	{
        for (j = 0; j < col; j++)
		{
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

