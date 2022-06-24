/**
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *aux = dest;
	int i = 0;

	while (*src && i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (aux);
}
