#include <stdint.h>
int main(void)
{
	  int a=50;
	  __asm volatile("MOV R0,%0"::"r"(a));
	for(;;);
}
