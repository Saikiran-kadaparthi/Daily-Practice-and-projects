//N queens!

#include <stdio.h>

int board[10];
int n;

int place(int row, int col)
{
	int i;
    for (i = 1; i < row; i++)
	{
        if (board[i] == col || (board[i] - i) == (col - row) || (board[i] + i) == (col + row))
        {
		    return 0;
		}
    }
    return 1;
}

void print()
{
	int i;
	int j;
    for (i = 1; i <= n; i++)
	{
        for (j = 1; j <= n; j++)
		{
            if (board[i] == j)
                printf("Q ");
            else
                printf(". ");
        }
        printf("\n");
    }
    printf("\n");
}

void solve(int row)
{
	int col;
    for (col = 1; col <= n; col++)
	{
        if (place(row, col))
		{
            board[row] = col;
            if (row == n)
                print();
            else
                solve(row + 1);
        }
    }
}

int main()
{
    printf("Enter number of queens: ");
    scanf("%d", &n);
    
    solve(1);
    
    return 0;
}

