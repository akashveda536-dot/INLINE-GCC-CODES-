#include <stdint.h>
int main(void)
{
	int n=5;
	int sum=0;
	__asm volatile("MOV R0,#1 \n"
			       "MOV R1,#0 \n"
			       "LOOP: \n"
			       "CMP R0,%1 \n"
			       "BGT END \n"
			       "ADD R1,R1,R0 \n"
			       "ADD R0,R0,#1 \n"
			       "B LOOP \n"
			       "END: \n"
			       "MOV %0,R1 \n"
			       :"=r"(sum):"r"(n):"r0","r1","cc");
			for(;;);
}
