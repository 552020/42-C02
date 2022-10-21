#include<stdio.h>
#include<string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	// char	*src[100]; // if I declare the string this way I need to put an asterisk to src as an argument of ft_strcpy
	char src[] = "Bye, World";
	char dest[] = "Hello, World";

	char *c;
	char *array[100];
	array = &src;

	ft_strcpy(dest, src);
	printf("dest: %s", dest);
	// ft_strcpy("Hallo, World!", src);

	return (0);
}

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	// printf("dest[last]: %c", dest[i]);
	
	return (dest);
}