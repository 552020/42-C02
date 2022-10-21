#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char str[6] = "Hello";

	printf("%s\n", str);
	// char *my_destination[100]; It doesn't work this way

	unsigned int size;
	size = 3;
	char *my_destination = "Hello, World!";
	char *my_source = "Short!";

	// ft_strncpy(*my_destination, "Hello, World!", 100);
	printf("dest: %s", ft_strncpy(my_source, my_destination, size));

}


char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n - 1)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = src[i];
	

	return (dest);

}



/* This is the simple implementation as in the man page

char *strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return dest;
}
 */