#include <stdint.h>
int main(void)
{
	int result;
	__asm volatile("MOV %0,#05":"=r"(result));
	for(;;);
}
