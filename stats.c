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
  
  unsigned char median = find_median(test,SIZE);
  unsigned char mean = find_mean(test,SIZE);
  unsigned char maximum = find_maximum(test,SIZE);
  unsigned char minimum = find_minimum(test,SIZE);
  print_array(test,SIZE);
  
  print_statistics(median,mean,maximum,minimum);


}

void print_statistics(unsigned char median,unsigned char mean,unsigned char maximum,unsigned char minimum){
  printf("The median value is: %d\n",median);
  printf("The mean value is: %d\n",mean);
  printf("The maximum value is: %d\n",maximum);
  printf("The minimum value is: %d\n",minimum);
}

void print_array(unsigned char *data_array, unsigned int range){
  //Function for printing the array elements
  printf("Array elements in Descending order:\n{ ");
  int i;
  for (i=0; i<range; i++){
	if (i%5 == 0) printf("\n");
	printf("%d ",data_array[i]);
  }
  printf("}\n");
}

char find_median(unsigned char *data_array, unsigned int range){
  //Function implementation of finding the median
  sort_array(data_array,range);
  if ((range%2) == 0){ //if the array has even number of elements get the average of the middle two
	unsigned char med1 = data_array[(range/2)-1];
	unsigned char med2 = data_array[range/2];
	return (med1+med2)/2;
  } 
  else{ //if it has odd number of elements, get the middle one
	return data_array[(range-1)/2];
  }
}

char find_mean(unsigned char *data_array, unsigned int range){
  //Function implementation of finding the mean
  int i;
  int sum = 0;
  for(i=0;i<range;i++)
	sum += data_array[i];
  return sum/range;
}

char find_maximum(unsigned char *data_array, unsigned int range){
  //Function implementation of finding the maximum
  unsigned char max=0;
  int i;
  for(i=0;i<range;i++)
	if(data_array[i] > max)
		max = data_array[i];
  return max;
}

char find_minimum(unsigned char *data_array, unsigned int range){
  //Function implementation of finding the minimum
  unsigned char min=255;
  int i;
  for(i=0;i<range;i++)
	if(data_array[i] < min)
		min = data_array[i];
  return min;
}

void sort_array(unsigned char *data_array, unsigned int range){
  //Function implementation of array selection sort
  int i, j, max_indx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < range-1; i++) 
    { 
	max_indx=i;
        // Find the minimum element in unsorted array 
        for (j = i+1; j < range; j++) 
          if (data_array[j] > data_array[max_indx]) 
            max_indx = j; 
  
        // Swap the found maximum element with the first element 
        swap(&data_array[max_indx], &data_array[i]); 
    } 
}

void swap(unsigned char *xp, unsigned char *yp) { 
  //Swap function implementation
  unsigned char temp = *xp; 
  *xp = *yp; 
  *yp = temp; 
} 














