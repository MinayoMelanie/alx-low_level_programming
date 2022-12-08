#include<stdio.h>

/**
 * main - Entry point
 *description:
 *printf() - prints size of various types on computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	prinf("size of a char: %ld byte(s)\n", sizeof(char));
	prinf("size of an int: %ld byte(s)\n", sizeof(int));
	prinf("size of a long int: %ld byte(s)\n", sizeof(long int));
	prinf("size of a long long: %ld byte(s)\n", sizeof(long long));
	prinf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}

