#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - calculate the sum of two numbers
 *
 * @a: number one
 * @b: number two
 *
 * Return: the sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - calculate the subtraction of two numbers
  *
  * @a: number one
  * @b: number two
  *
  * Return: the substraction of two numbers
  */
 int op_sub(int a, int b)
 {
	 return (a - b);
 }

 /**
  * op_mul - calculate the multiplication of two numbers
  *
  * @a: number one
  * @b: number two
  *
  * Return: the multiplication of two numbers
  */
 int op_mul(int a, int b)
 {
          return (a * b);
 }

 /**
  * op_div - calculate the division of two numbers
  *
  * @a: number one
  * @b: number two
  *
  * Return: the division of two numbers
  */
 int op_div(int a, int b)
 {
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
 }

 /**
  * op_mod - calculate the modulus of two numbers
  *
  * @a: number one
  * @b: number two
  *
  * Return: the modulus of two numbers
  */
 int op_mod(int a, int b)
 {
	 if (b == 0)
	 {
	 	printf("Error\n");
	 	return (100);
	 }
	 return (a % b);
 }
