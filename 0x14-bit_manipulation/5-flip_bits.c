#include "main.h"

/**
 *flip_bits - function that returns the number of bits
 *@n: the value
 *@m: the value flip
 *Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int store, run = 0;

	store = n ^ m;

	while (store)
	{
		run += (store & 1);
		store >>= 1;
	}

	return (run);
}
