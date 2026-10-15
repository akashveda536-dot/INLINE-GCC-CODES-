#include <stdint.h>
int main(void)
{
	int a=4;
	int b=5;
	__asm volatile("CMP %0,%1"::"r"(a),"r"(b));
	for(;;);
}
