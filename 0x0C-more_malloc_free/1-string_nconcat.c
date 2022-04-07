#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: cutoff for s2
 * Return: pointer to concatenated string location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;

