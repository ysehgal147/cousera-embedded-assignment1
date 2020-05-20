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
 * @author <Yogesh Sehgal>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test);
  sort_array(test);
  print_statistics(test);
}

/* Add other Implementation File Code Here */
int print_array(unsigned char test[SIZE])
{
  int i;
  printf("\nThe Given Array is\n");
  for(i=0;i<SIZE;i++){
    printf("%d ",test[i]);
  }
  printf("\n- - - - - - - - - - - - - - - - - - - -\n");
  return 0;
}

int find_mean(unsigned char test[SIZE])
{
  int i;
  float mean=0;
  for (i = 0; i < SIZE; i++)
  {
    mean+=test[i];
  }
  mean=mean/SIZE;
  return mean;
}

int find_median(unsigned char test[SIZE])
{
  int median = test[(SIZE/2)-1];
  return median;
}

int find_maximum(unsigned char test[SIZE])
{
  int i;
  int maximum=test[0];
  for (i = 0; i < SIZE; i++)
  {
    if (test[i]>maximum){
      maximum = test[i];
    }
  }
  return maximum;
}

int find_minimum(unsigned char test[SIZE])
{
  int i;
  int minimum = test[0];
  for (i = 0; i < SIZE; i++)
  {
    if (test[i] < minimum)
    {
      minimum = test[i];
    }
  }
  return minimum;
}

unsigned char sort_array(unsigned char test[SIZE])
{
  int i,j,temp;

  for (i = 0; i < SIZE; i++)
  {
    for (j = i + 1; j < SIZE; j++)
    {
      if (test[i] < test[j])
      {
        temp = test[i];
        test[i] = test[j];
        test[j] = temp;
      }
    }
  }
  printf("The Sorted Array is\n");
  for (i = 0; i < SIZE; i++){
    printf("%d ",test[i]);
  }
  printf("\n- - - - - - - - - - - - - - - - - - - -\n");
  return 0;
}

int print_statistics(unsigned char test[SIZE])
{
  printf("The Statistics are\n");
  int mean = find_mean(test);
  printf("The Mean is %d\n",mean);
  int median = find_median(test);
  printf("The Median is %d\n",median);
  int maximum = find_maximum(test);
  printf("The Maximum is %d\n",maximum);
  int minimum = find_minimum(test);
  printf("The Minimum is %d\n",minimum);
  printf("- - - - - - - - - - - - - - - - - - - -\n");
  return 0;
}