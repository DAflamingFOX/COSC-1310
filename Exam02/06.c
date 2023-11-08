#include <stdio.h>
// p and q are pointers to integers, b and c are integers.
int *p, *q, b, c;
// a is an array (or pointer to first element) of 5 integers.
int a[5]={7,6,5,4};
int main() {
    // pointer p now points to the first element in a
	p = a;
	// b is now equal to the 5th element (4th index) of a, which is 0
	// because the array was initialized, so all other elements are 0.
	b = *(p+4);
	// q now points to the 4th element (3rd index) of a, which is 4.
	q = a+3;
	// c is now equal to 4, which is what q was pointing towards.
	c = q[0];
	// take the value stored at the 2nd element (1st index) of a,
	// which is 6, and add the 0th (which is what b was equal to)
	// index (1st element), with a value of 7, of a to it.
	*(a+1) += a[b];
	// This will print "4, 0, 13, 4, address of the 4th element (3rd index)
	printf("%d %d %d %d %p\n", *q, b, p[b+1], c, q );
	return 0;
}
