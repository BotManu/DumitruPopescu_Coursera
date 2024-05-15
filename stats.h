/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Emanuel Dumitru-Popescu
 * @date 14 may 2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints statistics of the array, minimum,
 *        maximum and median
 *
 * 
 *
 * @param arr       array for which statistics should be printed
 * @param arr_size  size of the given array, i.e number of elements
 *
 * @return returns nothing
 */
void print_statistics(unsigned char arr[], unsigned int arr_size);

/**
 * @brief Prints the elements of an array
 * 
 * @param arr       array for which statistics should be printed
 * @param arr_size  size of the given array, i.e number of elements
 * 
 * @return returns nothing
*/
void print_array(unsigned char arr[], unsigned int arr_size);

/**
 * @brief Finds median of an array
 * 
 * @param arr       array for which statistics should be printed
 *                  !!!CAUTION!!! array must be sorted
 * @param arr_size  size of the given array, i.e number of elements
 * 
 * @return median value
*/
unsigned char find_median(unsigned char arr[], unsigned int arr_size);

/**
 * @brief Finds mean of an array
 * 
 * @param arr       array for which statistics should be printed
 * @param arr_size  size of the given array, i.e number of elements
 * 
 * @return mean value
*/
unsigned char find_mean(unsigned char arr[], unsigned int arr_size);

/**
 * @brief Finds maximum of an array
 * 
 * @param arr       array for which statistics should be printed
 * @param arr_size  size of the given array, i.e number of elements
 * 
 * @return maximum value
*/
unsigned char find_maximum(unsigned char arr[], unsigned int arr_size);

/**
 * @brief Finds minimum of an array
 * 
 * @param arr       array for which statistics should be printed
 * @param arr_size  size of the given array, i.e number of elements
 * 
 * @return minimum value
*/
unsigned char find_minimum(unsigned char arr[], unsigned int arr_size);

/**
 * @brief Sorts an array
 * 
 * @param arr       array for which statistics should be printed
 * @param arr_size  size of the given array, i.e number of elements
 * 
 * @return nothing
*/
void sort_array(unsigned char arr[], unsigned int arr_size);


#endif /* __STATS_H__ */
