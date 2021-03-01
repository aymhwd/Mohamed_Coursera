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
 * @file stats.h
 * @brief header file of statistical functions application
 *
 * This file contains the header for the following functions
   1- print_statistics() - A function that prints the statistics of an array including minimum, 		maximum, mean, and median.
   2- print_array() -  Given an array of data and a length, prints the array to the screen
   3- find_median() - Given an array of data and a length, returns the median value
   4- find_mean() -  Given an array of data and a length, returns the mean
   5- find_maximum() -  Given an array of data and a length, returns the maximum
   6- find_minimum() -  Given an array of data and a length, returns the minimum
   7- sort_array() - Given an array of data and a length, sorts the array descendingly
 *
 * @author Ayman Mohamed
 * @date March 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(unsigned char median,unsigned char mean,unsigned char maximum,unsigned char minimum);
/**
 * @brief this function takes the statistical results and print them in a readable format
 *
 * this function takes the median, mean, maximum, and the minimum values and prints them
 *
 * @param *data_array: pointer to an array of characters to print its statistics
 * @param range: integer representing the number of elements of the passed array
 * 
 * @return The function has no return, it prints to the stdout the statistical results mentioned
 */

void print_array(unsigned char *data_array, unsigned int range);
/**
 * @brief this function takes a pointer to an array of data and prints its element
 *
 * this function takes a pointer to an array of chracters and a specified range prints all of its  
 * contents
 *
 * @param *data_array: pointer to an array of characters to print its statistics
 * @param range: integer representing the number of elements of the passed array
 * 
 * @return The function has no return, it prints to the stdout the array elements
 */

char find_median(unsigned char *data_array, unsigned int range);
/**
 * @brief this function takes a pointer to an array of data and gets the median
 *
 * @param *data_array: pointer to an array of characters to to be processed
 * @param range: integer representing the number of elements of the passed array
 * 
 * @return the character value which is the median value of the array
 */

char find_mean(unsigned char *data_array, unsigned int range);
/**
 * @brief this function takes a pointer to an array of data and gets the mean
 *
 * @param *data_array: pointer to an array of characters to be processed
 * @param range: integer representing the number of elements of the passed array
 * 
 * @return the character value which is the mean value of the array
 */

char find_maximum(unsigned char *data_array, unsigned int range);
/**
 * @brief this function takes a pointer to an array of data and gets the maximum value
 *
 * @param *data_array: pointer to an array of characters to be processed
 * @param range: integer representing the number of elements of the passed array
 * 
 * @return the character value which is the maximum value of the array
 */

char find_minimum(unsigned char *data_array, unsigned int range);
/**
 * @brief this function takes a pointer to an array of data and gets the minimum value
 *
 * @param *data_array: pointer to an array of characters to be processed
 * @param range: integer representing the number of elements of the passed array
 * 
 * @return the character value which is the minimum value of the array
 */

void sort_array(unsigned char *data_array, unsigned int range);
/**
 * @brief this function takes a pointer to an array of data and sorts its element
 * using one of the simplest sorting algorithms (Selection Sort) this function
 * sorts the elements of a given array in a descending order
 * @param *data_array: pointer to an array of characters to be processed
 * @param range: integer representing the number of elements of the passed array
 * 
 * @return this function has no return value
 */

void swap(unsigned char *xp, unsigned char *yp);
/**
 * @brief swaps positions of two character variables
 * via pass by reference, this function swaps the positions of two character variables
 * @param *xp: pointer to the first character variable
 * @param *yp: pointer to the second character variable
 * 
 * @return this function has no return value
 */

#endif /* __STATS_H__ */
