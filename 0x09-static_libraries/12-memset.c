/**
 */
char *_memset(char *s, char b, unsigned int n)
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
