#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/* declare all of the functions before using them */
void readInput (float *floatArray, int arraySize);
void option (int userIn, float *floatArray, int arraySize);
float minArray (float *floatArray, int arraySize);
float maxArray (float *floatArray, int arraySize);
float sumArray (float *floatArray, int arraySize);
float avgArray (float *floatArray, int arraySize);
float dataSet (float *floatArray, int arraySize);
/* Set array size as 10 and call readInput function */
int main () {
      float dataSet[SIZE];
      int dataSetSize = SIZE;
      readInput (dataSet, dataSetSize);
}
/* Finds a minimum value from the array */
float minArray (float *floatArray, int arraySize) {
      int i;
      float min = 0;
      min = floatArray[0];
      for (i = 1; i < arraySize; i++) {
            if (floatArray[i] < min) {
                  min = floatArray[i];
} }
      printf("Min:%.2f\n\n", min);
}
/* Finds a maximum value from the array */
float maxArray (float *floatArray, int arraySize) {
      int i;
      float max = 0;
      max = floatArray[0];
      for (i = 1; i < arraySize; i++) {
            if (floatArray[i] > max) {
                  max = floatArray[i];
            }
}
      printf("Max:%.2f\n\n", max);
}
/* Finds a sum of all values from the array */
float sumArray (float *floatArray, int arraySize) {
      int i;
      float sum = 0;
      for (i = 0; i < arraySize; i++) {
            sum = sum + floatArray[i];
      }
      printf("Sum:%.2f\n\n", sum);
}
/* Finds a average of values in the array */
float avgArray (float *floatArray, int arraySize) {
      int i;
      float avg, total = 0;
      for (i = 0; i < arraySize; i++) {
            total = total +floatArray[i];
      }
      avg = total/arraySize;
      printf("Average:%.2f\n\n", avg);
}
/* Lists data of the array */
float dataSet (float *floatArray, int arraySize) {
      int i;
      printf("Data set:\n");
      for (i = 0; i < arraySize; i++) {
            printf("%.2f\n", floatArray[i]);
      }
      printf("\n");
}
void readInput (float *floatArray, int arraySize) {
      /* initialize integers first */
      int i;
      int userInput;
      /* ask user to enter values for the array */
      printf("Enter values in the data set, each on separate line\n");
      for (i = 0; i < arraySize; i++) {
            scanf("%f", &floatArray[i]);
      }
      /* print out the options and ask user to enter the option */
      printf("choose one of the options:\n");
      printf("(1) Find the minimum value.\n");
      printf("(2) Find the maximum value.\n");
      printf("(3) Calculate the sum of all the values.\n");
      printf("(4) Calculate the average of all the values.\n");
      printf("(5) Print the valus in the data set.\n");
      printf("(6) Exit the program.\n\n");
      /* keep asking user to choose the option */
      /* call switch function and print output for chosen option */
      while (1) {
            scanf("%d", &userInput);
            option(userInput, floatArray, arraySize);
      }
}
/* function containing switch case for each option */
void option (int userIn, float *floatArray, int arraySize) {
      switch (userIn) {
            case 1:
                  minArray(floatArray, arraySize);
                  break;
            case 2:
                  maxArray(floatArray, arraySize);
                  break;
            case 3:
sumArray(floatArray, arraySize);

} }
      break;
case 4:
      avgArray(floatArray, arraySize);
      break;
case 5:
      dataSet(floatArray, arraySize);
      break;
case 6:
exit(0);
      break;
default:
      printf("Invalid input. Enter a number between 1 and 6.\n\n");
      break;
      
