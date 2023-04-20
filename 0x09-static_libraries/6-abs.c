#include "main.h"

/**
 * _abst - Computes the absolute value of an integer.
 * @ct: The number to be computed.
 * Return: Absolute value of number or zero
 */

int _abst(int ct)

{

	if (ct < 0)
	{
	int abst_val;

	abst_val = ct * -1;
	return (abst_val);
	}
	return (ct);
}
