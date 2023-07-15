/*
 * File: 2-print_alphabet.c
 * Auth: sohasharaf
 */

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
		 char letter;
	
		 for (letter = 'a'; letter <= 'z'; letter++)
			 putchar(letter);
		
		 puchar('\n');

		 return (0);
}	
