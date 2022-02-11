/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2, sum = 0;
  float average;

    printf("Enter the mark 1 :"); //input mark1
    scanf("%d", &mark1);          //read the value
    printf("Enter the mark 2 :"); //input mark2
    scanf("%d", &mark2);          //read the value

    sum = mark1 + mark2;     //calculating sum
    average = sum/2.0;

    printf("Average : %.2f",average); //calculating average
    
    return 0;//end of main function
}

