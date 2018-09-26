//3.	Remove all instance of 1 char from a string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rmchr(char *ptr, char str[], char *c){
	//loop counters
	int i = 0;
	int j = 0;
	size_t size = strlen(str);  //get size of string array

	while(*(ptr + i) != '\0'){
		//if char matches replace the space with the next array value
		if (*(ptr + i) == *c) { 
			j = i;
			for(j; j < size; j++){
				*(ptr + j) = *(ptr + j + 1); //move all chars after match down one
			}
			size = size - 1;
		}
		//if current index of char does not meet above go to next index
		else{
			i++;	
		}		
	}
	printf("%s\n", str);
}

int main(int argc, char *argv[]) {
	char *ptr;
	char *str = argv[1];
	char *c = argv[2];
	//pointer now set to beginning of str[]
	ptr = str;

	printf("Removing char from string.\n");	
	
	rmchr(ptr, str, c); //method
	return 0;
}