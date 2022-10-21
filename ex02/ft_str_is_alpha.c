#include<stdio.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char *my_string = "HelloWorld";
	char *my_other_string = "Hello, World!";
	printf("%i\n", ft_str_is_printable(my_string));
	printf("%i\n", ft_str_is_printable(my_other_string));

	return (0);
}

int ft_str_is_printable(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if(!(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= 'a' && str[i] <= 'z'))
		{
			printf("c: %c\n", str[i]);
			printf("i: %i\n", i);
			return (0);
		}
		i++;
	}

	return (1);
}
	