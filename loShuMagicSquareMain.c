#include <stdio.h>
#include <stdlib.h>
int isLoShuMagicSquare(int  square[][3]);
int main() {
    //Declaration
    int loShuMagicSquare[3][3] = {{4,9,2},{3,5,7},{8,1,6}};

    //Check the function whether the function works properly
    if(isLoShuMagicSquare(loShuMagicSquare) == 1)
        printf("True");
    else 
        printf("False");

    return EXIT_SUCCESS;
}