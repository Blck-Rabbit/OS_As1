//4.	Remove str2 chars from str1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rmstr(char *ptr1, char *ptr2, char str1[], char str2[]){
	//loop counters
	int i = 0; //str1
	int j = 0;
	char curChar; //hold current Char for compare with str2

	size_t size1 = strlen(str1);  //get size of str1 array

	//while str1 doesn't read null terminator
	while(*(ptr1 + i) != '\0'){
		curChar = *(ptr1 + i);	
		
		if(strchr(str2, curChar) != NULL){ 	//compare curChar with str2
			for(j = i; j < size1; j++){
				*(ptr1 + j) = *(ptr1 + j + 1);	//move all other chars down one
			}
		}
		else{		//if current char no longer meets condition, go to next index
			i++;
		}
	}
	printf("%s\n", str1);
}

int main(int argc, char *argv[]) {
	char *ptr1;
	char *ptr2;
	char *str1 = argv[1];
	char *str2 = argv[2];
	//pointer now set to beginning of str[]
	ptr1 = str1;
	ptr2 = str2;

	printf("Removing characters from string.\n");	
	//method
	rmstr(ptr1, ptr2, str1, str2);
	return 0;
}