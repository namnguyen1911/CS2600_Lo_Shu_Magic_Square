#include <stdio.h>

int isLoShuMagicSquare(int square[][3]) {

    int n1 = square[0][0] + square[0][1] + square[0][2]; // row 1
    int n2 = square[1][0] + square[1][1] + square[1][2]; // row 2
    int n3 = square[2][0] + square[2][1] + square[2][2]; // row 3
    int n4 = square[0][0] + square[1][0] + square[2][0]; // column 1
    int n5 = square[0][1] + square[1][1] + square[2][1]; // column 2
    int n6 = square[0][2] + square[1][2] + square[2][2]; // column 3
    int n7 = square[0][0] + square[1][1] + square[2][2]; //diagonal 1
    int n8 = square[0][2] + square[1][1] + square[2][0]; //diagonal 2

    if(n1 == n2 && n2 == n3 && n3 == n4 && n4 == n5 && n5 == n6 && n6 == n7 && n7 == n8)
        return 1;
    else 
        return 0;
}