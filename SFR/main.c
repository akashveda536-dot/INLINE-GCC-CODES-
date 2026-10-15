#include <stdint.h>
int main(void)
{
	int a=5;
	int b=5;
	int check;
	__asm volatile("SUBS %1,%2\n"
			       "MRS %0,APSR\n"
			       :"=r"(check):"r"(a),"r"(b));
	for(;;);
}
