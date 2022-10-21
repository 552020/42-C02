#include<stdio.h>

int	ft_str_is_printable(char *str);
void test(void);

int main(void)
{
	test();
	return (0);
}

int ft_str_is_printable(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		printf("char:\t%c\t", str[i]);
		printf("\t%i", str[i]);
		printf("\n");
		if(str[i] < 31)
		{
			return(0);
		}
		i++;
	}
	return (1);

}

void test(void)
{
	char str[] = "Hallo, World!";
	char str_printable[] = "HALLOWORLD";

	printf("str:\t\t%i\n", ft_str_is_printable(str));
	printf("str_print:\t%i\n", ft_str_is_printable(str_printable));
}