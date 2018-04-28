#include <stdio.h>

/* As discussed in Powers of 2 x & x-1 will return the number countaing 
	only the 1's in the number n. So repetedly doing so will in turn 
	convert the number n to 0 and hence we can successfully count the
	number of 1's in the number 1.
	
	Time Complexity = O(k) where k is the number of 1's in the number n
*/
size_t count_ones(int n){
	size_t count = 0;
	while(n){
		n = n&(n-1);
		count++;
	}
	
	return count;
}

//Test driver program
int main(){
	int x1 = 1024;
	int x2 = 500;
	size_t r1 = count_ones(x1);
	if(r1 == 1){
		printf("Test1 Passed.\n");
	}
	if((r1 = count_ones(x2)) == 6){
		printf("Test2 passed.\n");
	}
    return 0;
}
