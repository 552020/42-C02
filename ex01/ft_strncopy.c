#include<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char *src[100];
	ft_strcpy("Hallo, World!", src);
	return (0);
}

char *ft_strcpy(char *dest, char *src){
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] == src[i];
		i++;
	}

}