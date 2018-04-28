#include <stdio.h>
#include <stdbool.h>

/* Checks whether a bit at position i has been set or not.
	The code is pretty much self explanatory. If the ith bit at
	n and 1 << i match then its set else not.
	
	Time Complexity = O(1)
*/
bool check(int n,int i){
	if(n&(1<<i)){
		return true;
	}else{
		return false;
	}
}

// Test driver for check

int main(){
	int x1 = 500,i1 = 2,i2 = 3,i3 = 4;
	if(check(x1,i1) == true)
		printf("Test1 passed.\n");
	if(check(x1,i2) == false)
		printf("Test2 passed.\n");
	if(check(x1,i3) == true)
		printf("Test3 passed.\n");
	
	return 0;
}