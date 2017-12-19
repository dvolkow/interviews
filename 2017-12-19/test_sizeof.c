/*
 * Test size of basic structures 
 */
#include <stdio.h>

int main()
{
	/*
	 * Here declared some variables
	 */
	char a; 
	int b; 
	long c; 
	long long d; 
	char * e = &a; 
	long long * f = &d; 

	/*
	 * What will be print in next cases?
	 */
	printf("char has %u byte size\n",sizeof(a));
	printf("int has %u byte size\n",sizeof(b));
	printf("long has %u byte size\n",sizeof(c));
	printf("long long has %u byte size\n",sizeof(d));
	printf("char's pointer has %u byte size\n",sizeof(e));
	printf("longlong's pointer has %u byte size\n",sizeof(f));
}
