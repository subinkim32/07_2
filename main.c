#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void f(void);
int i;
// if you want to print 50 #s, change i from global variable to local variable (void)

int main(void) {
	for (i = 0; i < 5; i++)
	{
		f();
	}
	return 0;
}

void f()
{
	for (i = 0; i < 10; i++)
	{
		printf("#");
	}
}
