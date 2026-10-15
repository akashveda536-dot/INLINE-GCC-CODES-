#include <stdint.h>
int main(void)
{
	int a=12;
	int b=8;
	int result;
	__asm volatile("add %0,%1,%2":"=&r"(result):"r"(a),"r"(b));
	for(;;);
}
