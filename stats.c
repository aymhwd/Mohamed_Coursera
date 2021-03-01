/******************************************************************************
 * Copyright (C) 2021 by Ayman Mohamed 
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Ayman Mohamed is not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief application for calculating statistical values of data set
 *
 * This file contains the main function and the function definitions for the following functions
   1- print_statistics() - A function that prints the statistics of an array including minimum, 		maximum, mean, and median.
   2- print_array() -  Given an array of data and a length, prints the array to the screen
   3- find_median() - Given an array of data and a length, returns the median value
   4- find_mean() -  Given an array of data and a length, returns the mean
   5- find_maximum() -  Given an array of data and a length, returns the maximum
   6- find_minimum() -  Given an array of data and a length, returns the minimum
   7- sort_array() - Given an array of data and a length, sorts the array descendingly
 * @author Ayman Mohamed
 * @date March 2021
 *
 */
#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

void print_statistics(unsigned char median,unsigned char mean,unsigned char maximum,unsigned char minimum){
  printf("The median value is: %d\n",median);
  printf("The mean value is: %d\n",mean);
  printf("The maximum value is: %d\n",maximum);
  printf("The minimum value is: %d\n",minimum);
}

void print_array(unsigned char *data_array, unsigned int range){
  //Function for printing the array elements
}

char find_median(unsigned char *data_array, unsigned int range){
  //Function implementation of finding the median
}

char find_mean(unsigned char *data_array, unsigned int range){
  //Function implementation of finding the mean
}

char find_maximum(unsigned char *data_array, unsigned int range){
  //Function implementation of finding the maximum
}

char find_minimum(unsigned char *data_array, unsigned int range){
  //Function implementation of finding the minimum
}

void sort_array(unsigned char *data_array, unsigned int range){
  //Function implementation of array selection sort
}
















