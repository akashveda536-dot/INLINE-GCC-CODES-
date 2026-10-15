#include <stdint.h>
int main(void)
{
	int value=10;
	__asm volatile("add %0,%0,#1":"+r"(value));
	for(;;);
}
