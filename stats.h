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
 * @file stats.h 
 * @brief Header File for stats.c, all the functions are declared here
 *
 * The File Contains All The Declared Functions for Statistics Calculations
 *
 * @author Yogesh Sehgal
 * @date 21 May 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */
int print_array();
/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * @return None
 */

int find_mean();
/**
 * @brief Given an array of data and a length, returns the mean
 * @return mean
 */

int find_median();
/**
 * @brief Given an array of data and a length, returns the median value
 * @return median
 */

int find_maximum();
/**
 * @brief Given an array of data and a length, returns the maximum
 * @return maximum
 */

int find_minimum();
/**
 * @brief Given an array of data and a length, returns the minimum
 * @return minimum
 */

unsigned char sort_array();
/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. Prints sorted array.
 * @return None
 */

int print_statistics();
/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median. Prints the result.
 * @return None
 */

#endif /* __STATS_H__ */
