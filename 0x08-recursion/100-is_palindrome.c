#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string.
 * @s: ptr to str
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if (*s == '\0')
		return (0);
	return (i + _strlen_recursion(s + 1));
}
/**
 * is_pal_2arg -  if a string is a palindrome with 2arg
 * @s: ptr to str
 * @tail: ptr to last char of str
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_pal_2arg(char *s, char *tail)
{
	if (*s == '\0')
		return (1);
	if (*s != *tail)
		return (0);
	return (is_pal_2arg(s + 1, tail - 1));
}
/**
 * is_palindrome -  if a string is a palindrome with 1arg
 * @s: ptr to str
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (is_pal_2arg(s, s + len));
}
