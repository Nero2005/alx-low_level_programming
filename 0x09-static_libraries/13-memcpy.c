/**
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
