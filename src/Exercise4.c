/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[50],i=0;
	for(i=0; i<n;i++){
		test_array[i] = atoi(argv[i+1]);
	}
	//Your codes here
	int fact;
	for (i=0; i<n; i++){
		printf("%d", test_array[i]);
	}
	for (i=0; i<n-1; i++){
			if (test_array[i+1] < test_array[i]){
				fact = test_array[i];
				test_array[i] = test_array[i+1];
				test_array[i+1] = fact;
		}
	}
	
