/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int compare(char *str, char *word, int index){

	int i = 0;
	int k = index;

	while (word[i] != '\0'){
		
		if (str[k] == '\0')
			return -1;

		if (str[k] != word[i])
			return -1;
		k++;
		i++;
	}
	return 0;


}
int count_word_in_str_way_1(char *str, char *word){

	int i = 0;
	int j = 0;
	int res;
	int wordLen;
	int count = 0;
	int strLen;

	while (word[i] != '\0'){
		i++;
	}
	wordLen = i;
	i = 0;
	
	while (str[i] != '\0')
		i++;
	strLen = i;
	i = 0;

	while (str[i] != '\0'){
		if (str[i] == word[j]){
			res = compare(str, word, i);
			if (res == 0){
				i = i++;
				if (i >= strLen){
					j = 0;
					count++;
					break;

				}

				j = 0;
				count++;
			}

			else
				i++;

		}
		else
			i++;
		
		
	}
	return count;
	
}

/*int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}*/

