/* print pattern 
	1 2 3 4 5 6 7 8 9 10
36 37 38 39 40 41 42 43 44 11
35 64 65 66 67 68 69 70 45 12
34 63 84 85 86 87 88 71 46 13
33 62 83 96 97 98 89 72 47 14
32 61 82 95 100 99 90 73 48 15
31 60 81 94 93 92 91 74 49 16
30 59 80 79 78 77 76 75 50 17
29 58 57 56 55 54 53 52 51 18
28 27 26 25 24 23 22 21 20 19*/	
#include <stdio.h>
int main()
{
    int i, j, N,board[10][10],left, top; // i and j for iteration, board multidimensional array for store value,left and top for iteration for posision 
    left = 0;
    top  = 10 - 1; // 10 for total row
    N    = 1;
    for(i=1; i<=10/2; i++, left++, top--)
    {
        // Fill from left to right
        for(j=left; j<=top; j++, N++)
        { 
            board[left][j] = N; // store value of n in board[0][1]....board[0][9] 
        }

        // Fill from top to down
        for(j=left+1; j<=top; j++, N++)
        {
            board[j][top] = N; // store value of n in board[1][9]...board[9][9]
        }

        // Fill from right to left
        for(j=top-1; j>=left; j--, N++)
        {
            board[top][j] = N; // store value of n in board[9][8].....board[9][0]
        }

        // Fill from down to top
        for(j=top-1; j>=left+1; j--, N++) 
        {
            board[j][left] = N; // store value of n in board[8][0]...board[0][1]
        }
    }

    // Print the pattern 
    for(i=0; i<10; i++) // row
    {
        for(j=0; j<10; j++) // column
        {
            printf("%-5d", board[i][j]); // -5 for space between two columns.
        }
        printf("\n"); // for new line.
    }
}

