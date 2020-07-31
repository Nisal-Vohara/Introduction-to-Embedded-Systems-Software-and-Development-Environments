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
 * @file <stats.c> 
 * @brief <statistics Calculator>
 *
 * 
 *
 * @author <Nisal Kariyawasam>
 * @date <29/07/2020 >
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

// Function to print the array
   unsigned int print_array(unsigned int array[], unsigned int size) {
    for ( unsigned int i=0;i<size;i++) {
        printf("%d ",array[i]) ;
    }
    printf("\n") ;
    return 0 ;
}

// Function to sort the array in descending order
   unsigned int sort_array(unsigned int array[], unsigned int size) {
       unsigned int temp = 0 ;
    for( unsigned int i=0;i<size-1;i++) {
         unsigned int maximum_index = i ;
        for ( unsigned int j =i+1;j<size;j++) {
            if (array[maximum_index] < array[j]) {
                maximum_index = j ;
            }
        }
        temp = array[i] ;
        array[i] = array[maximum_index] ;
        array[maximum_index] = temp ;
    }
    print_array(array,size) ;
    return *array ;
}

// Function to find the maximum value in the array
   unsigned int find_maximum(   unsigned int array[], unsigned int size) {
     unsigned int maximum_val = 0 ;
    for ( unsigned int i=0;i<size;i++) {
        if (maximum_val<array[i]) {
            maximum_val = array[i] ;
        }
    }
    return maximum_val ;
}

// Function to find the minimum value in the array
   unsigned int find_minimum(   unsigned int array[], unsigned int size) {
     unsigned int minimum_val = array[0] ;
    for ( unsigned int i=1;i<size;i++) {
        if (minimum_val>array[i]) {
            minimum_val = array[i] ;
        }
    }
    return minimum_val ;
}

// Function to find the median value in the array
   unsigned int find_median(   unsigned int array[], unsigned int size) {
    if (size%2 == 1) {
        return array[size/2] ;
    }
    else {
        return (((array[size/2]) + (array[size/2-1])) / 2) ;
    }
}

// Function to find the mean value in the array
   unsigned int find_mean(   unsigned int array[], unsigned int size) {
       unsigned int sum = 0;
    for ( unsigned int i=0;i<size;i++) {
        sum = sum + array[i] ;
    }
    return (sum/size) ;
}

// Function to pr unsigned intthe statistics
 unsigned int print_statistcis(   unsigned int max,   unsigned int min,   unsigned int median_val,   unsigned int mean_val) {
    printf("Stats \n") ;
    printf("Maximum = %d \n",max) ;
    printf("Minimum = %d \n",min) ;
    printf("median = %d \n",median_val) ;
    printf("Mean = %d \n",mean_val) ;

    return 0 ;
}

void main() {

     unsigned int test[SIZE] =        { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  sort_array(test,SIZE) ;
     unsigned int max = find_maximum(test,SIZE) ;
     unsigned int min = find_minimum(test,SIZE) ;
     unsigned int median_val = find_median(test,SIZE) ;
     unsigned int mean_val = find_mean(test,SIZE) ;
  print_statistcis(max,min,median_val,mean_val) ;


}


