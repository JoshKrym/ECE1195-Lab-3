#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Hello World!\n");
	uint32_t *regmap = (uint32_t *) 0x70000000; // base address of axi_regmap as set in the Vivado address editor

	uint64_t  res = 0, reg; // 64-bit register to hold the value of the multiplication and the result from the multiplier
	uint32_t  A, B;	// 32-bit random numbers

	A = rand();
	B = rand();
	res = (uint64_t) A * (uint64_t) B; // you have to do type casting before multiplying, otherwise, you will end up having incorrect result.

	// Assign A, B to your multiplier
	//regmap[0] = A;
	//regmap[1] = B;
	regmap[0] = 0xFFFFFFFF;
	printf("%81x\n", regmap[0]);
	printf("%81x\n", regmap[1]);

	// give the reset signal
	regmap[4] = 0;
	regmap[4] = 1;
	printf("%81x\n", regmap[4]);
	regmap[4] = 0;
	printf("%81x\n", regmap[0]);
	printf("%81x\n", regmap[1]);

	// poll for done signal
	while(regmap[5]!=1);
	printf("%81x\n", regmap[0]);
	printf("%81x\n", regmap[1]);
	// assuming your result is stored in R_high = regmap[1] and R_low = regmap[0]
	// you have to do type casting first, othersie you will end up with a wrong answer.
	reg = (((uint64_t) regmap[3]) << 32) + ((uint64_t) regmap[2]);

	// %8lx will print uint32_t in hex in 8 digits, %16llx will print uint64_t in hex in 16 digits.

	printf("%8lx * %8lx = %8lx%8lx (%16llx) (%s) \n\n", A, B, regmap[3], regmap[2], res, (reg == res ? "correct" : "wrong"));

	return 0;
}
