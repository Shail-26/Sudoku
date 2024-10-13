#include "sudoku.h"
#include <stdio.h>

void inputBoard(Sudoku *s) {
    printf("Enter your Sudoku puzzle (use 0 or space for empty cells):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            char input;
            scanf(" %c", &input);
            if (input == '0' || input == ' ') {
                s->board[i][j] = ' '; 
            } else {
                s->board[i][j] = input; 
            }
        }
    }
}

int main() {
    Sudoku s;

    inputBoard(&s);

    printf("\n");
    printf("Sudoku: \n");
    
    if (solveSudoku(&s)) {
        printGrid(&s);
    } else {
        printf("No solution exists.\n");
    }

    return 0;
}
