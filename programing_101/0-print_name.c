#include <stdio.h>
#include "function_pointers.h"

void D()
{
	printf("robin");
}
void C(void (*prt)())
{
	prt();
}
int main()
{
	C(D);
	return (0);
}
