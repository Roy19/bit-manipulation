/* Checks whether a given number is a power of
   2 or not
*/
#include <stdio.h>
#include <stdbool.h>

/* Normal method is basic iteration which checks whether
	a given number(N) is a power of 2 by repeatedly dividing
	it by 2 and then checking the remainder is 1 or not.
	
	Time Complexity = O(log N)
*/

bool isPow2iter(int x){
	if(x == 0)
		return false;
	else{
		while(x % 2 == 0)x /= 2;
		return (x == 1);
	}
}
/* Powers of 2 have a property that they have only 1 bit set
	in their binary representation. Also we note that x-1 have all
	bits as that of x except that of the rightmost 1 and the bits 
	right to it. So in case of powers of 2, that rightmost 1 is the set
	1 itself and hence if we & x with x-1 we get 0 for powers of 2 as
	none of the bits would match for them.
	
	Time Complexity = O(1), considering that bitwise operation takes 
	constant amount of time in the ALU of the Processor.
*/
bool isPow2bitwise(int x){
	// checks if x == 0 and x&(x-1) == 0 when x is a power of 2 or otherwise.
	return (x && !(x & (x - 1)));
}
// Test driver for the functions
int main(){
	int x1 = 50000;
	int x2 = 1024;
	bool r1 = isPow2iter(x1);
	bool r2 = isPow2bitwise(x1);
	if(r1 == false && r1 == r2)
		printf("Correct result for x1 = %d\n",x1);
	r1 = isPow2iter(x2);
	r2 = isPow2bitwise(x2);
	if(r1 == true && r1 == r2)
		printf("Correct result for x2 = %d\n",x2);
	
	return 0;
}