
//2.  Create a C program that uses Euler's Phi-function

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    char *ptr;
	int num, cnt, factors;
	int pTotal = 0;
	int GCD = 0;
	
	//argv loop counter
	int cNum = 1;
	
	while(cNum < argc){
		num = (int)strtol(argv[cNum], &ptr, 10);  //each loop, set num as the input from CLI
		
		//Determine the GCD of each number that goes into 'num'
		//for every 'cnt' less than num...
		for (cnt = 1; cnt < num; cnt++){
			for(factors = 1; factors <= cnt; factors++){			//for every factor of cnt			
				if(num % factors == 0 && cnt % factors == 0){	//for every factor divisble into num/cnt
					GCD = factors;							//gcd becomes that factor
				}
			}
			//if GCD is 1 then add it to the answer
			if(GCD == 1){
				pTotal++;
			}
		}
		printf("The phi of %d is %d\n", num, pTotal);
		cNum++;
		pTotal = 0;
	}
	return 0;
}