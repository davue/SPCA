#ifndef ASS2_H
#define ASS2_H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

void pass(char **word);

// Reverses the element order in the given array
void reverse(uint32_t *arr, unsigned int len);

// Puts the first word in the given string into output_word and returns it's length
int first_word(char *input_string, char **output_word);

// Checks whether the computer it is running on is little endian or big endian
bool is_little_endian();

// Takes an array and a function pointer and then applies the given function to each element of the array
void map(int (*f) (int), int *array, size_t len);
#endif
