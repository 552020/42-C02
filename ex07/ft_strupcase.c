#include<stdio.h>

char	*ft_strupcase(char *str);
void test(void);

int main(void)
{
	test();
}

char	*ft_strupcase(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
	{
		// printf("char:\t%c\t", str[i]);
		if(str[i] > 'a' && str[i] < 'z')
		{
			// printf("%c\t", str[i]);
			str[i] = str[i] - 32;
			// printf("%c\n", str[i]);
		}
		
		i++;
	}
	str[i] = '\0';

	return (str);

}

void	test(void)
{
	char str[] = "Hello World!";
	printf("%s", ft_strupcase(str));
}