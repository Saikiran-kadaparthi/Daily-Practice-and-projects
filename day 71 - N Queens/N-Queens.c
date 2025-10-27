 #include <stdio.h>
#include <math.h>

#define N 4

int issafe(int board[], int row, int col)
{
	int i;
    for (i=0; i<row; i++)
	{
        if (board[i] == col || abs(board[i] - col) == abs(i - row))
            return 0;
    }
    return 1;
}

void solve(int board[], int row)
{
	
    if (row == N)
	{
		int i;
        for (i=0; i<N; i++)
        {
            printf("%d ", board[i]);
    	}
    	
        printf("\n");
        return;
    }
    
    int col;

    for (col=0; col<N; col++)
	{
		
        if (issafe(board, row, col))
		{
            board[row] = col;
            solve(board, row + 1);
            board[row] = -1;
        }
        
    }
    
}

int main()
{
    int board[N];
    int i;
    
    for (i=0; i<N; i++)
    {
        board[i] = -1;
	}
	
    solve(board, 0);
    
    return 0;
}

