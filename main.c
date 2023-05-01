#include "Header.h"
int main(void) {
	char src[6] = { 'h','e','l','l','o','\0'};
	char dest[6] = { '\0' };
	;
	//should print hel
	
	printf("Str_n_cat:%s\n", my_str_n_cat(dest, src, 3));
	printf("\n\n");
	int array[5] = { 5, 6, 7, 9, 10 };
	printf("Binary search index: %d\n",binary_search(array, 9));
	printf("\n\n");
	char* strings[] = { "water","earth", "air", "fire" };
	int size = 4;
	bubble_sort(strings, size);
	printf("Bubble sort:[%s", strings[0]);
	for (int i = 1; i < size; i++) {
		printf(",%s", strings[i]);
	}
	printf("]\n");
	printf("\n\n");
	char* palindrome = "race       car";
	//checks if the above string palindrome is a palindrome and then returns 1 if yes or returns 0 if it is not
	printf("Palindrome:\n");
	printf("Is \"%s\" a palindrome?: %d\n",palindrome,is_palindrome(palindrome, strlen(palindrome)));
	printf("\n\n");
	printf("Sum_primes: %d\n", sum_primes(7));
	printf("\n\n");
	char* string="Occurences";
	int number_of_occur=0;
	char character = '\0';
	//Same as: Occurrences occ []
	Occurrences* occ = malloc(strlen(string)*sizeof(Occurrences));
	for (int index = 0; index < strlen(string); index++) {
		occ[index].num_occurrences = number_of_occur;
		occ[index].character = string[index];
	}
	maximum_occurrences(string, occ, &number_of_occur, &character);
	
	
	printf("Maximum character: '%c', occurrences: %d\n", character, number_of_occur);
	//initializing values of arrays
	printf("\n\n");
	int signed_integer[4][5] = { {-5,6,0,2,2},
								{2,2,2,9,3}, 
								{3,3,2,1,-8},
								{7,-2,6,0,4} };
	
	int* pointer[4];
	int column_size = sizeof(signed_integer[0]) / sizeof(int);
	int row_size = (sizeof(signed_integer) / sizeof(int))/column_size;
	for (int i = 0; i < row_size; i++) {
		 pointer[i] = signed_integer[i];
	}
	printf("Size of row: %d and size of column:%d\n", row_size,column_size );
	int* arr ;
	int address= 0;
	max_consecutive_integers(pointer, row_size, column_size, &arr, &address);
	printf("\n");
	printf("Max consecutive sequence of length: %d starting at address: %p\n",address , arr);
	printf("\n");
	printf("Values: ");
	for (int i = 0; i < address; i++) {
		printf("%d ", arr[i]);
	}
	




}