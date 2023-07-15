/*
 * File: 4-print_alphabt.c
 * Auth: sohasharaf
 */
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
