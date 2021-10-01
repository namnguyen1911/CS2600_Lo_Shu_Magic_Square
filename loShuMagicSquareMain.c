#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
//Function declaration
int isLoShuMagicSquare(int square[][3]);
void generateSquare(int square[][3]);
void display();

int main() {
    //Declaration
    int loShuMagicSquare[3][3] = {{4,9,2},{3,5,7},{8,1,6}}; //This is a real Lo Shu Magic Square
    int count = 0;
    int square[3][3];
    time_t t;

    //Display the square
    display(loShuMagicSquare);
    //Check the function whether the function works properly
    if(isLoShuMagicSquare(loShuMagicSquare) == 1)
        printf("This is a Lo Shu Magic Square\n");
    else 
        printf("This is NOT a Lo Shu Magic Square\n");

    //Init random number generator
    srand((unsigned) time(&t));

    //Generate square, check the square whether Lo Shu Magic Square or not, count
    while(true) {
        generateSquare(square);
        count++;
        if(isLoShuMagicSquare(square) == 1) {
            printf("The total number of square generated and tested before success: %d\n", count);
            display(square);
            break;
        }
    }

    return EXIT_SUCCESS;
}

void display(int square[][3]) {
    for(int row = 0; row < 3; row++) {
        printf("[");
        for(int col = 0; col < 3; col++) {
            printf(" %d",square[row][col]);
        }
        printf(" ]\n");
    }
}