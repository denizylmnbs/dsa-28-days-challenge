//
// Created by deniz on 17.08.2025.
//

//Task A: Write a C program that finds an element in an unsorted array of numbers. First create
//an array of 10 elements and initialize it with integer random numbers in your program.
//Then ask user to enter a number and search this number in the array you have
//created. Display a message to the user indicating whether the number is in the array
//or not.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int guess = 0;

    srand(time(NULL)); // Setting the seed

    int numbers[10]; // Declaration of array

    for (int i = 0; i < 10; i++) { // Main loop for insert random numbers.
          int randNum = rand() & 100 + 1;
          numbers[i] = randNum;
    }

    printf("Enter a number to search: ");
    scanf("%d", &guess);

    int isCorrect = 0, i = 0;

    do { // Main loop for check the guess number is in the array
        if (numbers[i] == guess) {
            isCorrect = 1;
        }
        i++;
      }
    while(isCorrect == 0 && i < 10);


    if (isCorrect == 1)
        printf("\nThe number is in the array.\n");
    else
        printf("\nThe number is not in the array.\n");

    return 0;
}