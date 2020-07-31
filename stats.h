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
 * @file <sats.h> 
 * @brief <statistics Calculator>
 *
 * 
 *
 * @author <Nisal Kariyawasam>
 * @date <29/07/2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

unsigned int print_array(unsigned int array[],unsigned int size) ;

/**
 * @brief <Function to print the array>
 *
 * 
 *
 * @param <array> <The array to be printed to the screen>
 * @param <size> <Size of the array>
 * 
 *
 */

unsigned int sort_array(unsigned int array[],unsigned int size) ;

/**
 * @brief <Function to sort the array in descending order>
 *
 * 
 *
 * @param <array> <The array to be sorted>
 * @param <size> <Size of the array>
 * 
 *
 */

unsigned int find_maximum(unsigned int array[],unsigned int size) ;

/**
 * @brief <Function to find the maximum of the array >
 *
 * 
 *
 * @param <array> <The array to be searched>
 * @param <size> <Size of the array>
 * 
 *
 */

unsigned int find_minimum(unsigned int array[],unsigned int size) ;

/**
 * @brief <Function to find the minimum of the array >
 *
 * 
 *
 * @param <array> <The array to be searched>
 * @param <size> <Size of the array>
 * 
 *
 */

unsigned int find_median(unsigned int array[],unsigned int size) ;

/**
 * @brief <Function to find the median of the array >
 *
 * 
 *
 * @param <array> <The array to be searched>
 * @param <size> <Size of the array>
 * 
 *
 */

unsigned int find_mean(unsigned int array[],unsigned int size) ;

/**
 * @brief <Function to find the mean of the array >
 *
 * 
 *
 * @param <array> <The array to be searched>
 * @param <size> <Size of the array>
 * 
 *
 */

unsigned int statistics(unsigned int max,unsigned int min,unsigned int median_val,unsigned int mean_val) ;

/**
 * @brief <Function to print the statistics >
 *
 * 
 *
 * @param <max> <max_value>
 * @param <min> <min_value>
 * @param <median> <median_val>
 * @param <mean> <mean_val>
 * 
 *
 */


#endif /* __STATS_H__ */
