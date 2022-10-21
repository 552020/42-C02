#include<stdio.h>

int	ft_str_is_lowercase(char *str);
void test(void);

int main(void)
{
	test();
	return (0);
}

int ft_str_is_lowercase(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < 'a' || str[i] > 'z')
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
	char str_lowercase[] = "halloworld";

	printf("str:\t\t%i\n", ft_str_is_lowercase(str));
	printf("str_low:\t%i\n", ft_str_is_lowercase(str_lowercase));
}