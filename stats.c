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
 * @author <Add FirsName LastName>
 * @date <Add date >
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
  print_array(test, SIZE);
  printf("Statistics of unsorted array:\r\n");
  print_statistics(test, SIZE);
  printf("---Sorting the array-----\r\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);
  printf("Statistics of sorted array:\r\n");
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char arr[], unsigned int arr_size){
  printf("-------Statistics of array-------\r\n");
  printf("Minimum value:   %d\r\n", find_minimum(arr,arr_size));
  printf("Maximum value:   %d\r\n", find_maximum(arr, arr_size));
  printf("Mean of array:   %d\r\n", find_mean(arr, arr_size));
  printf("Median of array: %d\r\n", find_median(arr,arr_size));
  printf("---------------------------------\r\n");
}

void print_array(unsigned char arr[], unsigned int arr_size){
  printf("Elements of the array:\r\n");
  for(unsigned int i = 0; i<arr_size; i++){
    printf("idex %d: %d\r\n", i, arr[i]);
  }
}

unsigned char find_median(unsigned char arr[], unsigned int arr_size){
  if(arr_size%2==0){
    unsigned int median_index=arr_size/2;
    return (arr[median_index]+arr[median_index+1])/2;
  }else{
    return (arr[arr_size/2+1]);
  }
}

unsigned char find_mean(unsigned char arr[], unsigned int arr_size){
  if(!arr_size){
    return 0;
    }
  unsigned int arr_sum=0;
  for(unsigned int i=0; i<arr_size; i++){
    arr_sum+=arr[i];
  }
  return arr_sum/arr_size;
}

unsigned char find_maximum(unsigned char arr[], unsigned int arr_size){
  unsigned char max_val=0;
  for(unsigned int i=0; i<arr_size; i++){
    if(arr[i]>=max_val){
      max_val = arr[i];
    }
  }
  return max_val;
}

unsigned char find_minimum(unsigned char arr[], unsigned int arr_size){
  unsigned char min_val = 255;
  for(unsigned int i=0; i<arr_size; i++){
    if(arr[i]<=min_val){
      min_val=arr[i];
    }
  }
  return min_val;
}

void sort_array(unsigned char arr[], unsigned int arr_size){
  unsigned char done=0;
  while(!done){
    done=1;
  for(unsigned int i=0; i<arr_size-1; i++){
      if(arr[i]>arr[i+1]){
        unsigned char acc=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=acc;
        done=0;
      }
  }
  }
}