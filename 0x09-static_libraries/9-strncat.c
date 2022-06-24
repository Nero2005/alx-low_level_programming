/**
 */
char *_strncat(char *dest, char *src, int n)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
