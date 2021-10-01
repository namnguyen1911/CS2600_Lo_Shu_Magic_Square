#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateSquare(int square[][3]) {
    //Declaration
    //time_t t;
    int number = 0;
    int check[] = {0,0,0,0,0,0,0,0,0,0};

    //srand((unsigned) time(&t));

    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            number = rand() % 9 + 1;

            while(check[number] != 0) {
                number = rand() % 9 + 1;
            }
            check[number]++;
            square[row][col] = number;
        }
    }

}