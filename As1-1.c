//Find all Armstrong Numbers

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main(int argc, char const *argv[]){
    double k, p, q;
    int digit;		//used to find number of digits in sum
    char *ptr;	
	int num, sum = 0, i = 0;
    
    k = strtol(argv[1], &ptr, 10);		//set the argv input as its respective variable
    p = strtol(argv[2], &ptr, 10);
    q = strtol(argv[3], &ptr, 10);


    //iterate through the range
    while (p <= q){
    	//santizing totals and setting num to p
		num = p;
		sum = 0;
		i = 0;
    	while(i < k){
	        sum = sum + (int) pow((num % 10), k);  //add digit to total sum
    		i++;
			num = num / 10; 		//take away a digit to get next digit for mod
		}
		
		digit = floor (log10 (sum) + 1); 	//Find the num of digits in sum

		if (sum == 0 || sum == 1){
			//do nothing to prevent output of these numbers
		}
		else if(sum == p && digit == k){	//if sum and # of digits match print the number
			printf("%d\n", (int) p);
		}
		p++;
	}
	return 0;
}