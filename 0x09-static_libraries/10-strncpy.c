/**
 */
char *_strncpy(char *dest, char *src, int n)
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
