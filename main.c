#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int inc(int counter);
int main(int argc, char *argv[]) {
	int i = 10;
	printf("i before function call = %d\n", i);
	i = inc(i);
	// inc(i) only prints 10, 10
	printf("i after function call = %d\n", i);

	return 0;
}

int inc(int counter)
{
	counter++;
	return counter;
}
