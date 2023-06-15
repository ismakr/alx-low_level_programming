#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: elements of size bytes
 * @size: size
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	*p = 0;
	return (p);
}
