//
// Created by deniz on 17.08.2025.
//

//Task B: Modify your program in part (a) such that the user enters the numbers that will be
//populated to the array.

#include <stdio.h>

int main(void) {
    int guess = 0;

    int numbers[10]; // Declaration of an array

    for (int i = 0; i < 10; i++) { // Main loop for insert random numbers.
        int tempNum = 0;
        printf("Enter number %d to populate: ", i+1);
        scanf("%d", &tempNum);
        numbers[i] = tempNum;
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