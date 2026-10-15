#include<stdint.h>
int main(void)
{
	int value=10;
	__asm volatile("LDR R0,[%0]"::"r"(&value));
	int stored;
	__asm volatile("STR R0,[%0]"::"r"(&stored));
	for(;;);
}
