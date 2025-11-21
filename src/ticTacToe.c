// ticTacToe.c
// Written by Logan Donnelly
// Date Written: 9/11/2025
// Description: Implementation of ticTacToe game 

#include <stdio.h>
#include <stdlib.h>
#include "ticTacToe.h"

void printWelcomeMessage() {

    printf("\t\tWELCOME TO TIC TAC TOE!\n");
    printf("\n");
    printf("I hope you enjoy the game and have lots of fun playing!\n");
    printf("\n");
}

void printGameRules() {

    printf("Here is how the game works:\n\n");

    printf("\t1. Choose if you want to play one player or two player.\n");
    printf("\t2. Enter a number n which will be the side length of the n x n grid.\n");
    printf("\t   For example, if you entered 3, you would play with a 3 x 3 grid.\n");
    printf("\t3. Players take turns placing an X or an O until one player ");
    printf("reaches three in a row.\n\n");

    printf("Later versions will allow different game modes, but for now in v1 only ");
    printf("sudden death is allowed.\n");
}

