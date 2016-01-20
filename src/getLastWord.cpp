/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int lastSpace(char *str, int len){

	int i = 0;
	int index = -1;
	while (i < len){
		if (str[i] == ' ')
			index = i;
		i++;
	}
	return index;
	
}
char * get_last_word(char * str){

	int i = 0;
	int index;
	int len;
	char *res = (char*)malloc(20 * sizeof(char));
	if (str == NULL)
		return NULL;

	else{
		while (str[i] != '\0'){
			i++;
		}
		len = i;
		index = lastSpace(str, len);
		while (index == len - 1){
			len--;
			if (len == 0)
				return "";
			else
				index = lastSpace(str, len);
		}
		if (index == -1)
			return "";
		i = 0;
		index++;
		while (index < len){
			res[i] = str[index];
			i++;
			index++;
		}
		res[i] = '\0';
		return res;
	}


}
