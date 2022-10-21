#include<stdio.h>

char	*ft_strcapitalize(char *str);
void test(void);

int main(void)
{
	test();
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	// printf("char:\t%c\t", str[i]);
	int first_letter;
	int upper;
	int lower;
	int number;

	first_letter = 1;
	i = 0;


	while(str[i] != '\0')
	{
		upper = str[i] > 'A' && str[i] < 'Z';
		lower = str[i] > 'a' && str[i] < 'z';
		number = str[i] > '0' && str[i] < '9';
		

		if((upper || lower || number) && first_letter)
		{
			if(lower)
			{
				str[i] = str[i] - 32;
				upper = 1;
				
			}
		}
		
		lower = 0;
		if((lower) && (!first_letter))
		{

			str[i] = str[i] + 32;
			
		}
		first_letter = 0;

		if(!upper || !lower || !number)
		{
			first_letter = 1;
		}
		i++;
	}
	str[i] = '\0';

	return (str);

}

void	test(void)
{
	char str[] = "hello woRLD 123-djfkl-, hi, how are you?!";
	printf("%s", ft_strcapitalize(str));
}