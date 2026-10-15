#include <stdint.h>
int main(void)
{
	int a=4;
	int b=5;
	int result=0;
	__asm volatile("CMP %[a],%[b] \n""ITE GT \n""MOVGT %[res],#1 \n""MOVLE %[res],#0 \n":[res]"=r"(result):[a]"r"(a),[b]"r"(b):"cc");
	for(;;);
}
