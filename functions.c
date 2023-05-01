#include "Header.h"
char* my_str_n_cat(char* dest,char* source,int n) {
	int i = 0;
	while (*(source + i) != '\0' && i < n) {
		*(dest + i) = *(source + i);
		i++;

	}
	return dest;

}
int binary_search(int sorted[], int target) {
	int left = 1;
	int right = sizeof(sorted)+1;
	int targetindex = -1;
	bool found = false;
	while (!found && left <= right) {
		int mid = (left + right) / 2;
		if (target == sorted[mid]) {
			found = true;
			targetindex = mid;

		}
		if (target < sorted[mid]) {
			right = mid - 1;
		}
		if (target > sorted[mid]) {
			left = mid + 1;
		}
	}
	return targetindex;

}
void bubble_sort(char* strings[], int num_of_strings) {
	int u = num_of_strings;
	while (u > 0) {
		int c =1;
		while (c < u) {
			if (strcmp(strings[c],strings[c-1])==-1) {
				char* temp = strings[c - 1];
				strings[c - 1] = strings[c];
				strings[c] = temp;
				}
			c++;
		}
		u--;

	}


}
void remove_whitespace(char* string, int length, char* new_str, int* count) {
	//or when length equals zero
	
	if (!length) {
		return;
	}
	else {
		int size = strlen(string) - length;
		printf("Size: %d and length: %d\n", size, length);
		int ind = strlen(new_str);
		printf("Index: %d\n", ind);
		if (string[size] != ' ') {
			new_str[ind] = string[size];
			new_str[ind + 1] = '\0';
		}
		else {
			(*count)++;
			
		}



	}
	length--;
	remove_whitespace(string, length, new_str,count);
	
}
int is_palindrome(char* string, int length) {
	
	char* new_str = (char*)malloc(strlen(string)*sizeof(char));
	new_str[0] = '\0';
	int count=0;
	remove_whitespace(string, strlen(string), new_str, &count);
	
	int new_length = length - count;
	if (new_length == 0) {
		free(new_str);
		return 1;
	}
	else {
		int size = strlen(new_str);
		if (new_str[size - new_length] != new_str[new_length-1]) {
			return 0;

		}
		
		
	}
	length--;
	is_palindrome(string, length);
}
int is_prime(int n, int count) {
	count--;
	if (count==1) {
		return 1;
	}
	if (!(n % count)) {
		return 0;
	}
	//recursive
	else is_prime(n, count);
	
}
int sum_primes(unsigned int n) {
	int sum = 0;
	if (n == 1) {
		return 0;
	}
	if (is_prime(n, n)) {
		//recursive
		return n + sum_primes(n - 1);
	}
	//recursive
	sum_primes(n - 1);



}
void maximum_occurrences(char* string, Occurrences* occurrences, int* integer, char* character) {
	//initialize
	for (int index = 0; index < strlen(string); index++) {
		occurrences[index].num_occurrences= *integer;
	}
	for (int i = 0; i < strlen(string); i++) {
		for (int j = 0; j < strlen(string); j++) {
			if (occurrences[j].character == string[i]) {
				occurrences[j].num_occurrences++;
			}
			else occurrences[i].character = string[i];
		}
		
	}
	
	for (int index = 0; index < strlen(string) ; index++) {
		occurrences[index].frequency = (double)occurrences[index].num_occurrences / strlen(string);
		if (occurrences[index].num_occurrences > *integer) {
			*integer = occurrences[index].num_occurrences;
			*character = occurrences[index].character;
		}
	}


	


}
void max_consecutive_integers(int signed_integers[][1], int columns, void** pointer_to_pointer, void* pointer) {

}
