#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;

	/* 1. Find differing bits using XOR */
	xor_result = n ^ m;

	/* 2. Count the number of 1s in xor_result */
	while (xor_result != 0)
	{
		/* Check if the least significant bit is 1 */
		if (xor_result & 1)
			count++;

		/* Shift right to check the next bit */
		xor_result = xor_result >> 1;
	}

	return (count);
}
