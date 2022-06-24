/**
 */
char *_strcat(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
