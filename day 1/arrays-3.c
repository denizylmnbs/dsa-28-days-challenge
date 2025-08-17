//
// Created by deniz on 17.08.2025.
//

//Task C: Write a C program that creates an array of eight real numbers that will calculate their
// average and determine which values are greater than average. Therefore, this
// program will have the following steps:
// i) Declare and create the array
// ii) Populate the array with the input from the user
// iii) Calculate the average of these numbers
// iv) Traverse the array to find the numbers that are greater than the average

#include <stdio.h>

int main(void) {
    int numbers[8]; // Declaration of an array
    int sum = 0, average = 0;

    for (int i = 0; i < 8; i++) { // Main loop for insert random numbers.
        int tempNum = 0;
        printf("Enter number %d to populate: ", i+1);
        scanf("%d", &tempNum);
        numbers[i] = tempNum;
        sum += tempNum;
    }

    average = sum / 8;

    printf("The average of the numbers is: %d\n", average);

    for (int i = 0; i < 8; i++) {
        if (numbers[i] > average) {
            printf("%d is greater than average and index %d\n", numbers[i], i);
        }
    }


    return 0;
}