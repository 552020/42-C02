#include<stdio.h>

char	*ft_strcpy(char *dest, char *src);
int add (int i, int j);

int	main(void)
{
	// char	*src[100]; // if I declare the string this way I need to put an asterisk to src as an argument of ft_strcpy
	char *src = "Bye, World";
	char *dest = "Hello, World";

	// ft_strcpy("Hallo, World!", src);
	int a;
	a = 1;
	int c = add(1, 3);
	printf("%i, c");
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
	printf("dest: %s", dest);
	return (dest);
}

int add (int i, int j)
{
	return (i + j);
}