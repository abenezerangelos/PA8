#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<ctype.h>
typedef struct occurrences
{
	int num_occurrences;
	double frequency;
	char character;
} Occurrences;
char* my_str_n_cat(char* dest, char* source, int n);
int binary_search(int sorted[], int target);
void bubble_sort(char* strings[], int num_of_strings);
int is_palindrome(char* string, int length);
int sum_primes(unsigned int n);
void maximum_occurrences(char* string, Occurrences* occurrences, int* integer, char* character);
void max_consecutive_integers(int** signed_integers,int rows, int columns, int** pointer_to_pointer, int* pointer);
void remove_whitespace(char* string,int length, char* new_str,int* count);
int is_prime(int n, int count);