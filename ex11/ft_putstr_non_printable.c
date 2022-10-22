#include<stdio.h>
#include<unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_dec_to_hexa(int i);

int main(void)
{
	char my_string[] = "Hello World!";
	char hexa_string[] = "Hello\x01\x05\x0a\x15 World!";
	ft_putstr_non_printable(my_string);
	ft_putstr_non_printable(hexa_string);
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	int j;
	char c;
	i = 0;
	j = 0;

	while(i != '\0')
	{
		c = str[i];
		if(str[i] < 31)
		{
			j = str[i] + 0;
			write(1, "\\", 1);
			ft_dec_to_hexa(str[i]);

		}
		write(i, &c, 1);
		i++;

	}
}

void ft_dec_to_hexa(int i)
{
	char c;
	ft_dec_to_hexa(i / 16);
	ft_dec_to_hexa(i % 16);
	if (i < 16)
	{
		if (i <= 9)
		{
			c = '0' + 9;
			write(1, &c, 1);
		}
		if (i >= 10 && i <= 16)
		{
			c = 'a' + i - 10;
			write(1, &c, 1);
		}

	}
}