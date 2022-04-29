#include <stdio.h>
#include <stdlib.h>
/* declare all of the functions before using them */
void readInput (float *dataSetPtr, int dataSetSize);
void option (int userIn, float *dataSetPtr, int dataSetSize);
void getDataSetSize (int *dataSetSizePtr);
void allocateFloatArray (float **dataSetPtrPtr, int dataSetSize);
void freeFloatMemory (float **dataSetPtrPtr);
float minArray (float *dataSetPtr, int dataSetSize);
float maxArray (float *dataSetPtr, int dataSetSize);
float sumArray (float *dataSetPtr, int dataSetSize);
float avgArray (float *dataSetPtr, int dataSetSize);
float dataSet (float *dataSetPtr, int dataSetSize);
/* Set array size to null */
int main () {
      float *dataSetPtr = NULL;
      int dataSetSize = 0;
      getDataSetSize (&dataSetSize);
      /* DEBUG statement */
      printf ("dataSetSize is: %i\n", dataSetSize);
      allocateFloatArray (&dataSetPtr, dataSetSize);
      /* DEBUG statement */
      printf ("dataSetPtr is: %p\n", dataSetPtr);
      readInput (dataSetPtr, dataSetSize);
}
/* get data set size from the user */
void getDataSetSize (int *dataSetSizePtr) {
      printf ("Please enter the size of the data set.\n");
      scanf ("%i", dataSetSizePtr);
}
/* set an array by starting point and array size using calloc */
void allocateFloatArray (float **dataSetPtrPtr, int dataSetSize) {
      *dataSetPtrPtr = calloc (dataSetSize, sizeof(float));
      if (*dataSetPtrPtr == NULL) {
            printf ("Memory not available for all data. Terminating program\n");
exit (0); }
}
/* de-allocate the dataSetPtrPtr in the memory */
void freeFloatMemory (float **dataSetPtrPtr) {
      free(*dataSetPtrPtr);
}
/* Finds a minimum value from the array */
float minArray (float *dataSetPtr, int dataSetSize){
      int i;
      float min = 0;
      min = dataSetPtr[0];
      for (i = 1; i < dataSetSize; i++) {
            if (dataSetPtr[i] < min) {
                  min = dataSetPtr[i];
} }
      printf("Min:%.2f\n\n", min);
}
/* Finds a maximum value from the array */
float maxArray (float *dataSetPtr, int dataSetSize){
      int i;
      float max = 0;
      max = dataSetPtr[0];
      for (i = 1; i < dataSetSize; i++) {
            if (dataSetPtr[i] > max) {
                  max = dataSetPtr[i];
            }
}
      printf("Max:%.2f\n\n", max);
}
/* Finds a sum of all values from the array */
float sumArray (float *dataSetPtr, int dataSetSize){
      int i;
      float sum = 0;
      for (i = 0; i < dataSetSize; i++) {
            sum = sum + dataSetPtr[i];
      }
      printf("Sum:%.2f\n\n", sum);
}
/* Finds a average of values in the array */
float avgArray (float *dataSetPtr, int dataSetSize){
      int i;
      float avg, total = 0;
      for (i = 0; i < dataSetSize; i++) {
            total = total + dataSetPtr[i];
      }
      avg = total/dataSetSize;
      printf("Average:%.2f\n\n", avg);
}
/* Lists data of the array */
float dataSet (float *dataSetPtr, int dataSetSize){
      int i;
      printf("Data set:\n");
      for (i = 0; i < dataSetSize; i++) {
            printf("%.2f\n", dataSetPtr[i]);
      }
      printf("\n");
}
void readInput (float *dataSetPtr, int dataSetSize){
      /* initialize integers first */
      int i;
      int userInput;
      /* ask user to enter values for the array */
      printf("Enter values in the data set, each on separate line\n");
      for (i = 0; i < dataSetSize; i++) {

scanf("%f", &dataSetPtr[i]);
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
            option(userInput, dataSetPtr, dataSetSize);
      }
}
/* function containing switch case for each option */
void option (int userIn, float *dataSetPtr, int dataSetSize){
      switch (userIn) {
            case 1:
} }
      minArray(dataSetPtr, dataSetSize);
      break;
case 2:
      maxArray(dataSetPtr, dataSetSize);
      break;
case 3:
      sumArray(dataSetPtr, dataSetSize);
      break;
case 4:
      avgArray(dataSetPtr, dataSetSize);
      break;
case 5:
      dataSet(dataSetPtr, dataSetSize);
      break;
case 6:
      /* call freeFloatMemory function and exit */
      freeFloatMemory(&dataSetPtr);
      exit(0);
      break;
default:
      printf("Invalid input. Enter a number between 1 and 6.\n\n");
      break;
      
