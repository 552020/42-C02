#include<stdio.h>

int	ft_str_is_uppercase(char *str);
void test(void);

int main(void)
{
	test();
	return (0);
}

int ft_str_is_uppercase(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < 'A' || str[i] > 'Z')
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
	char str_uppercase[] = "HALLOWORLD";

	printf("str:\t%i\n", ft_str_is_uppercase(str));
	printf("str_up:\t%i\n", ft_str_is_uppercase(str_uppercase));
}