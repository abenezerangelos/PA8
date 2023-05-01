#include "Header.h"
int main(void) {
	char src[6] = { 'h','e','l','l','o','\0'};
	char dest[6] = { '\0' };
	;
	//should print hel
	printf("%s\n", my_str_n_cat(dest, src, 3));
	int array[5] = { 5, 6, 7, 9, 10 };
	printf("Binary search index: %d\n",binary_search(array, 9));
	char* strings[] = { "water","earth", "air", "fire" };
	int size = 4;
	bubble_sort(strings, size);
	printf("[%s", strings[0]);
	for (int i = 1; i < size; i++) {
		printf(",%s", strings[i]);
	}
	char* passer = "race car s";
	char* new_str = (char*)malloc(strlen(passer) * sizeof(char));
	*(new_str) = '\0';
	int count=0;
    remove_whitespace(passer,strlen(passer),new_str,&count);
	printf("And the count is: %d\n", count);
	printf("No space: %s\n", new_str);
	char* palindrome = "race       car";
	printf("Is it a palindrome?: %d\n",is_palindrome(palindrome, strlen(palindrome)));
	printf("Sum_primes: %d\n", sum_primes(7));
	char* string="Occurences";
	int number_of_occur=0;
	char character = '\0';
	//Same as: Occurrences occ []
	Occurrences* occ = malloc(strlen(string)*sizeof(Occurrences));
	printf("This is the size: %d\n", sizeof(occ));
	for (int index = 0; index < strlen(string); index++) {
		occ[index].num_occurrences = number_of_occur;
		occ[index].character = string[index];
	}
	maximum_occurrences(string, occ, &number_of_occur, &character);
	
	
	printf("Maximum character: '%c', occurrences: %d\n", character, number_of_occur);

	



}