/*
 * Test pointer ariphmetic 
 */
#include <stdio.h>

int main()
{
	/*
	 * Here declared some variables
	 */
	char a[] = "Hello"; 
	int b[] = {'H', 'e', 'l', 'l', 'o'}; 
	char * c = a; 
	char * d = a + 2; 
	int * e = b; 
	int * f = b + 2; 
	char * tst1 = (char *)e;
	char * tst2 = (char *)f;

	/*
	 * What will be print in next cases?
	 */
	printf("%c, %c, %u\n", *c, *d, d - c);
	printf("%u, %u, %u\n", *e, *f, f - e);
	printf("%c, %c, %u\n", *tst1, *tst2, tst2 - tst1);
}
